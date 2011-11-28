settings.outformat = "pdf";
settings.tex = "xelatex";

defaultpen(fontsize(10));
label("=", (0, 0));
label("$int$", (0, -10));
draw((0, -20)--(-50, -60));
draw((0, -20)--(50, -60));
label("i", (-50, -70));
label("$int$", (-50, -80));
label("c", (50, -70));
label("$char$", (50, -80));
