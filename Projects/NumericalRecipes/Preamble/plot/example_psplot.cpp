#include <cstdlib>
#include <cstring>
#include <vector>
#include <math.h>
#include <stdio.h>
#include "psplot.h"
int main(){
	std::vector<double> x(500),y(500);
	for (int i=0;i<500;i++)
	{
		y[i] =  1.0*i;
		x[i] = 1.0*i;
	}
	char* filename =(char *)"/home/jordi/Documents/CPP/Projects/NumericalRecipes/Preamble/plot/fig.ps";
	char* xlabel =(char*) "a";
	char* ylabel =(char*) "b";
	char* dash = (char*)"2 4";
	char* title= (char*)"blah";
	
	PSpage pg(filename);
	PSplot p(pg,0.,500.,0.,500.);
	p.frame();
	p.autoscales();
	p.xlabel(xlabel);
	p.ylabel(ylabel);
	p.lineplot(x,y);
	p.setdash(dash);
	p.label(title ,200,200);
	pg.close();
	pg.display();
}
	


