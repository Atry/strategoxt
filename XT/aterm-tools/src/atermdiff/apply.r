\literate[{\btt apply}]

reverse-Monad like strategies. apply2(a,b) applies a;b <+ a <+ b, apply3
applies a;b;c <+ a;b <+ a;c <+ b;c <+ b <+ c, et cetera. The idea is that
every strategy is tried in order. At least one must succeed. The 'monads'
are used to prevent having to execute each strategy more than once.

Because Stratego doesn't support first-order strategies (yet), a
strategy must be defined for each number of strategies to apply. At the
moment there are definitions for up to four strategies. Support for higher
numbers can easily be added.

\begin{code}
module apply
imports lib
signature
  constructors
    Fail:    ApplyResult
    Success: ApplyResult

strategies

  apply-start = split(id,!Fail)
  apply(s) = try((s,!Success))

  apply(a,b) = 
	  apply-start
	; apply(a)
	; apply(b)
	; apply-end

  apply(a,b,c) = 
	  apply-start
	; apply(a)
	; apply(b)
	; apply(c)
	; apply-end

  apply(a,b,c,d) =
	  apply-start
	; apply(a)
	; apply(b)
	; apply(c)
	; apply(d)
	; apply-end

rules
  apply-end:
    (trm,Success)
  ->
    trm
\end{code}

