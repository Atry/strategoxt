\literate[{\tt ASFIX}]
% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
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

% $Id: Sorts-Sdf-Syntax.r,v 1.1.1.1 2001/05/30 15:19:00 mdejonge Exp $

\begin{code}
module Sorts-Sdf-Syntax
imports Kernel-Sdf-Syntax 
signature
  constructors
    sort	: Sort 	-> Symbol
    Sorts	: Symbols 	-> Grammar

\end{code}
