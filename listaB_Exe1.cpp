#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main (void)
{
	float x1,x2,y1,y2,d;
	printf ("Programa calcular distancia\n");
	
	printf ("Digite os valor de x1\n");
	scanf ("%f", &x1);
	printf ("Digite os valor de x2\n");
	scanf ("%f", &x2);
	printf ("Digite os valor de y1\n");
	scanf ("%f", &y1);
	printf ("Digite os valor de y2\n");
	scanf ("%f", &y2);
	
	d = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	printf ("A distancia e: %f\n",sqrt (d));
	
	system ("pause");
	
	return 0;
}
