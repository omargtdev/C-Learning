#include <stdio.h>
/* To use util functions about math operations,
 * we need to import math library */
#include <math.h>

int main(){

	// sqrt is to get the root of a number
	double a = sqrt(10);
	// Exponentiation	
	double b = pow(3, 4);
	// Round numbers
	int c = round(3.61);
	// Round numbers to next integer
	int d = ceil(3.14);
	// Round numbers removing float point
	int e = floor(3.89);
	// Absolut value |-23| = 23
	double f = fabs(-123.0);
	// Natural logarithm (base-e logarithm)
	double g = log(5);
	// Common logarithm 
	double h = log10(100);
	/* We can also use trigonometric ratios
	 * sin -> sine
	 * cos -> cosine
	 * tan -> tangent
	 */
	double i = sin(50); 
	double j = cos(50);
	double k = tan(50);

	
	printf("Sqrt of 10: %lf\n", a);
	printf("3 to the fourth: %lf\n", b);
	printf("Round: %d\n", c);
	printf("Ceil: %d\n", d);
	printf("Floor: %d\n", e);
	printf("Absolut value: %lf\n", f);
	printf("Natural logarithm: %lf\n", g);
	printf("Common logarithm: %lf\n", h);
	printf("Sine: %lf\n", i);
	printf("Cosine: %lf\n", j);
	printf("Tangent: %lf\n", k);

	return 0;
}
