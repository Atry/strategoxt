\literate[Desugaring]

	Desugaring : translating high-level constructs to low-level
	ones

\begin{code}
module desugar
imports stratego stratlib list-sort use-def lib
\end{code} 

	\paragraph{Varyadic operators}

\begin{code}
rules

  HL : Seqs([])           -> Id
  HL : Seqs([s | ss])     -> Seq(s, Seqs(ss))
  HL : Choices([])        -> Fail
  HL : Choices([s | ss])  -> Choice(s, Choices(ss))
  HL : LChoices([])       -> Fail
  HL : LChoices([s | ss]) -> LChoice(s, LChoices(ss))

  HL : Lets(sdefs,s) -> Let(sdefs,s)

  //HL : Lets([], s) -> s
  //HL : Lets([sdef | sdefs], s) -> Let(sdef, Lets(sdefs, s))

  MkSeq : (s1, s2) -> Seq(s1, s2)

strategies

  seqs = foldr(!Id, MkSeq)
\end{code}

	\paragraph{Match, Build, Apply combinations}

\begin{code}
rules

  HL : BA(s, t)            -> Seq(Build(t), s)
  HL : MA(t, s)            -> Seq(Match(t), s)
  HL : AM(s, t)            -> Seq(s, Match(t))
  HL : BAM(s, t1, t2)      -> Seqs([Build(t1), s, Match(t2)])
  HL : InfixApp(t1, s, t2) -> App(s, Op("",[t1,t2]))
\end{code} 

\paragraph{Primitives}

	Lift non-variable arguments to primitives.

\begin{code}
rules

  LiftPrimArgs : 
    Prim(f, ts) -> Scope(xs, Seq(Seqs(s), Prim(f, ts')))
    where <fetch(not(Var(id)))> ts
        ; <unzip(LiftPrimArg); (concat, unzip(id))> ts => (xs, (s, ts'))

  LiftPrimArg :
    Var(x) -> ([], (Id, Var(x)))

  LiftPrimArg :
    t -> ([x], (Where(Seq(Build(t), Match(Var(x)))), Var(x)))
    where <not(Var(id))> t; new => x
\end{code}

\paragraph{Strategy Applications}

	Factoring out strategy applications; The right-hand side of a
	rule can contain applications of a strategy to a term; This is
	factored out by translating it to a condition that applies the
	strategy and matches the result against a new variable, which
	is then used in the rhs;  In fact this can be generalized to
	applications in arbitrary builds;

\begin{code}
strategies

  Bapp = Bapp0 <+ Bapp1 <+ Bapp2

rules

  Bapp0 : Build(t[App(Build(t'), t'')]) -> Build(t[t'](pat-td))

  Bapp1 : Build(App(s, t')) -> Seq(Build(t'), s)

  Bapp2 : Build(t[App(s, t')]) -> 
          Scope([x], Seq(Where(BAM(s, t', Var(x))), Build(t[Var(x)](pat-td))))
          where new => x

  Bapp0 : Build(t[RootApp(Build(t'))]) -> Build(t[t'](pat-td))

  Bapp1 : Build(RootApp(s)) -> s

  Bapp2 : Build(t[RootApp(s)]) -> 
          Scope([x], Seq(Where(Seq(s, Match(Var(x)))), Build(t[Var(x)](pat-td))))
          where new => x

  Bapp2 : Build(t[Anno(t1, t2)]) -> 
          Scope([x], Seq(Where(Seq(Prim("SSLsetAnnotations", [t1, t2]), Match(Var(x)))), 
                         Build(t[Var(x)](pat-td)))) 
          where new => x
\end{code}

Only look for Apps and RootApps under constructor applications and term
explosions. Avoid lifting an App from within another App or RootApp.

\begin{code}
  pat-td(s) = 
    s <+ (Op(id, fetch(pat-td(s)))
         + Explode(id, pat-td(s))
         + Explode(pat-td(s), id)
         + Prim(id, fetch(pat-td(s))))
\end{code}

\begin{code}
strategies

  Mapp = Mapp0 <+ Mapp1 <+ Mapp2

rules

  Mapp1 : Match(App(s, t')) -> BA(s, t')

  Mapp2 : Match(t[App(s, t')]) -> 
          Scope([x], Seq(Match(t[Var(x)](pat-td)), 
                     Seq(Build(Var(x)), 
                     Seq(Build(t'), s))))
          where new => x

  Mapp0 : Match(t[RootApp(Match(t'))]) -> Match(t[t'](pat-td))

  Mapp1 : Match(RootApp(s)) -> s

  Mapp2 : Match(t[RootApp(s)]) -> 
          Scope([x], Seq(Match(t[Var(x)](pat-td)), Seq(Build(Var(x)), s)))
          where new => x


  Mapp2 : Match(t[Anno(t1, t2)]) -> 
          Scope([x], Seq(Match(t[As(Var(x), t1)](pat-td)), 
                         Where(Seq(Prim("SSLgetAnnotations", [Var(x)]), Match(t2)))))
          where new => x
\end{code}


\paragraph{List Matching}

\begin{code}
rules

  ListVarScope :
    Scope(xs, s) -> Scope(ys, s)
    where <map(try(?ListVar(<id>)))> xs => ys

  ListMatch : 
    Match(t[Op("Cons", [Var(ListVar(x)), Op("Nil", [])])]) -> 
    Match(t[Var(x)])

  ListBuild : 
    Build(t[Op("Cons", [Var(ListVar(x)), Op("Nil", [])])]) -> 
    Build(t[Var(x)])

  ListMatch : 
    Match(t[Op("Cons", [t, Op("Cons", [Var(ListVar(x)), Op("Nil", [])])])]) -> 
    Match(t[Op("Cons", [t, Var(x)])])

  ListMatch : 
    Build(t[Op("Cons", [t, Op("Cons", [Var(ListVar(x)), Op("Nil", [])])])]) -> 
    Build(t[Op("Cons", [t, Var(x)])])
\end{code}

\paragraph{Term Explosion and Construction}

\begin{code}
rules

  Expl : 
    Match(t[Explode(t1, t2)]) -> 
    Scope([x], 
          Seq(Match(t[Var(x)]),
              Where(BAM(Scope([y],Seq(Match(Var(y)),Prim("SSL_explode_term",[Var(y)]))), 
                        Var(x), 
			Op("", [t1, t2])
                        ))))
    where new => x; new => y

  Expl  : 
    Build(t[Explode(t1, t2)]) -> 
    Scope([x], Seq(Prim("SSL_mkterm",[t1,t2]), 
                   Seq(Match(Var(x)),
                       Build(t[Var(x)]))))
    where new => x

  Expl : 
    ExplodeCong(s1, s2) ->
    Scope([x,x',y,y'],
	  Seq(Match(Explode(Var(x),Var(y))),
	      Seq(Where(Seq(BAM(s1, Var(x), Var(x')), BAM(s2, Var(y), Var(y')))),
                  Prim("SSL_mkterm",[Var(x'),Var(y')]))))
    where new => x; new => x'; new => y; new => y'
\end{code} 


\paragraph{Rules to Strategies}

	A rule corresponds to a strategy that first matches the
	left-hand side, then checks the conditions and finally builds
	the right-hand side; The left-hand side and right-hand side
	should be in basic term format, as defined by the predicate
	|bterm|;

\begin{code}
strategies

  pureterm = not(topdown(Con(id, id, id) + App(id, id)))

  buildterm = not(topdown(Con(id, id, id) + Wld))

rules

  RtoS : SRule(Rule(l, r, s)) -> Seqs([Match(l), Where(s), Build(r)])
         where <pureterm> l ; <buildterm> r

  RtoS : SRule(StratRule(l, r, s)) -> Seqs([l, Where(s), r])
\end{code} 

\paragraph{Contexts}

	Factoring out contexts; Contexts used in a rule are translated
	to a local traversal that replaces the pattern occuring in the
	context in the lhs by the pattern occurring in the context in
	the rhs;

\begin{code}
rules

  Rcon : 
    SRule(Rule(l[Con(Var(c), l', f)], r[Con(Var(c), r', Call(f', []))], s)) ->
    Scope([c'],
      SRule(Rule(l[Var(c)], r[Var(c')], 
	         Seq(s, BAM(Call(f', [SRule(Rule(l', r', Id))]), 
                            Var(c), Var(c'))))))
         where new => c'

  Rcon' : 
    SRule(Rule(l[Con(Var(c), l', f)], r[Con(Var(c), r', Call(f', []))], s)) ->
    SRule(Rule(l[Var(c)], 
               r[App(Call(f', [SRule(Rule(l', r', Id))]), Var(c))],
	       s))

  Rcon'' : SRule(Rule(l[Con(Var(c), l', Call(f, []))], r, s)) ->
         SRule(Rule(l[Var(c)], r, 
	       Seq(s, BA(Call(f, [Match(l')]), Var(c)))))
	(* Con(Var(c), _, _) should not occur in r *)
\end{code}

	Note: The local traversal should be closed for variables not
	occuring in the outer pattern; But this is more relevant for
	multi-contexts which are not supported yet;

	Other problems:

	- local variables for inner rule; the inner SRule should be
	enclosed in a \verb|Scope(xs, _)| where 
\begin{verbatim}
   <diff> (<tvars> (l', r'), <tvars> (l[Var(c)], r[Var(c')])) => xs
\end{verbatim}
	
	- placement of derived strategy in where clause; option first
	do a matching traversal at start of where, and at end of where
	do a replacing traversal.

	- multiple uses of context in rhs

\paragraph{Desugaring single rules}

\begin{code}
strategies

  desugarRule = 
    rec x(try(Rcon; x + Scope(id, x) + RtoS))
\end{code} 

\paragraph{Desugaring Strategies}

\begin{code}
strategies

  DesugarListMatching =
    topdown(try(ListVarScope + desugarRule); 
            repeat(HL + ListMatch + ListBuild))

  desugar = 
    topdown(try(desugarRule); 
            repeat(LiftPrimArgs + HL + Bapp + Mapp + Expl))

  desugar' = 
    topdown(try(desugarRule); repeat(HL))

  desugar-spec = 
    map(SDef(id, id, desugar))
\end{code}
 
% Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

