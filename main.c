#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, x1, x2, returnvalue;
	printf("\nInput a, b, c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	returnvalue = compute(a, b, c, &x1, &x2);
	if (returnvalue) 
		printf("x1 = , x2 = ", &.1x1, &.1x2);
	else
		printf("No roots!");
}

double compute(double a, double b, double c, double *x1, double *x2){
	double d = b * b - 4 * a * c;
}
