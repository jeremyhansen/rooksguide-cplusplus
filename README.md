The Rook's Guide to C++
====================


Here are some basic expectations for getting the .tex files in publication shape:

* Each topic has its own .tex file - for right now they're all organized as digestible mini-chapters, though I expect them to merge and evolve later on.

* The cpp.tex file is the core of the project, and the place where all the chapters are inserted via \input{}

* chap_advancedarith.tex is a decent place to see a fairly well-developed 

* Chapter \sections should be designated with \LevelD{My section} and \subsections with \LevelE{My subsection}

* Bits of code and symbols within a sentence should be placed within a \texttt{...}. So should program output, which should appear on its own line.

* Code listings that stand on their own (and pseudocode) should be put in \begin{lstlisting}/* Code */ \end{lstlisting}

* Each chapter has the following sections, in this order:

** \LevelD{Review Questions}

** \LevelD{Homework Questions}

** \LevelD{Review Answers}

** \LevelD{Homework Answers}

** \LevelD{Further Reading}

* Write each sentence on a separate line. This helps with managing versions. It's harder to look at but easier to maintain.

* Wrap URLs in \url{...}

* Fork your own branch, and we'll pull your changes gradually into the master branch

* The raw material we have now is very rough - I would appreciate not sharing it with the world just yet

* Control the urge to purge the students' colloquial expressions unless they make the text too difficult to read, but feel free to get rid of the silly. ("Witch doctors" and "voodoo" crept into a number of places inexplicably)

* Thanks for your help! Feel free to contact me at jeremyhansen@acm.org, skype:jah_vt, or 802-279-6054. (If it's more appropriate to add it as a GitHub issue, feel free to put it there.)