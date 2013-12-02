The Rook's Guide to C++
====================


Here are some basic expectations for getting the .tex files in publication shape:

* Each topic has its own .tex file - for right now they're all organized as digestible mini-chapters, though I expect them to merge and evolve later on.

* The cpp.tex file is the core of the project, and the place where all the chapters are inserted via `\input{}`

* Chapter `\sections` should be designated with `\LevelD{My section}` and `\subsections` with `\LevelE{My subsection}`

* Bits of code and symbols within a sentence should be placed within a `\Code{…}`. So should program output, which should appear on its own line.

* Code listings that stand on their own (and pseudocode) should be put in

	    \noindent\begin{minipage}{\linewidth}\begin{lstlisting}
	    /* Code */
	    \end{lstlisting}\end{minipage}

* Important terms should be placed within `\Keyword{...}`. This indexes them automatically.

* Each chapter should have the following sections, in this order:

	+ `\LevelD{Review Questions}`

	+ `\LevelD{Review Answers}`

	+ `\LevelD{Further Reading}`

* Write each sentence on a separate line. This helps with managing versions. It's harder to look at but easier to maintain.

* Wrap URLs in `\url{...}`

* Fork your own branch, and we'll pull your changes gradually into the master branch

* Thanks for your help! Feel free to contact me at jeremyhansen@acm.org, skype:jah_vt, or if it's more appropriate to add it as a GitHub issue, feel free to put it there.