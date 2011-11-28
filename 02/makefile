all: assignment2.pdf

assignment2.pdf: assignment2.tex p1.pdf
	xelatex assignment2.tex
	xelatex assignment2.tex

pictures: p1.pdf

p1.pdf: p1.gv
	dot p1.gv -Tpdf -op1.pdf
