settings.outformat = "pdf";
settings.tex = "xelatex";

defaultpen(fontsize(10));
label("=", (0, 0));
label("$float$", (0, -10));
draw((0, -20)--(-50, -60));
draw((0, -20)--(50, -60));
label("f", (-50, -70));
label("$float$", (-50, -80));
label("--", (50, -70));
label("$int$", (50, -80));
draw((50, -90)--(50, -130));
label("3", (50, -140));
label("$int$", (50, -150));
