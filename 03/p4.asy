settings.outformat = "pdf";
settings.tex = "xelatex";

defaultpen(fontsize(10));
label("=", (0, 0));
label("$float$", (0, -10));
draw((0, -20)--(-50, -60));
draw((0, -20)--(50, -60));
label("f", (-50, -70));
label("$float$", (-50, -80));
label("+", (50, -70));
label("$float$", (50, -80));
draw((50, -90)--(0, -130));
draw((50, -90)--(100, -130));
label("f", (0, -140));
label("$float$", (0, -150));
label("1", (100, -140));
label("$int$", (100, -150));
