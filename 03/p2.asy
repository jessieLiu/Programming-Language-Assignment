settings.outformat = "pdf";
settings.tex = "xelatex";

defaultpen(fontsize(10));
label("=", (0, 0));
label("$int$", (0, -10));
draw((0, -20)--(-50, -60));
draw((0, -20)--(50, -60));
label("i", (-50, -70));
label("$int$", (-50, -80));
label("--", (50, -70));
label("$float$", (50, -80));
draw((50, -90)--(50, -130));
label("2.5", (50, -140));
label("$float$", (50, -150));
