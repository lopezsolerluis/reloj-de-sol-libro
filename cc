#!/bin/bash

re='^[0-9]+$'
if $1
then
    pdflatex libro.tex
    pdflatex libro.tex
    pdflatex pantalla.tex
    pdflatex pantalla.tex
elif [[ $1 =~ $re ]]
    then
    pdflatex "\\def\\capitulo{capitulos/capitulo-$1}\\include{libro}"
    pdflatex "\\def\\capitulo{capitulos/capitulo-$1}\\include{pantalla}"
else 
    pdflatex "\\def\\capitulo{$1}\\include{libro}"
    pdflatex "\\def\\capitulo{$1}\\include{pantalla}"
fi

    
