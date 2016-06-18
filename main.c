#include <stdio.h>
#include <math.h>

int compute(double, double, double, double *, double *);

int main() {
	double a, b, c, x1, x2;
	int returnvalue;
	printf("\nInput a, b, c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	returnvalue = compute(a, b, c, &x1, &x2);
	if (returnvalue) 
		printf("x1 = %lf, x2 = %lf\n", x1, x2);
	else
		printf("No roots!\n");
}

int compute(double a, double b, double c, double *x1, double *x2) {
	double d = b * b - 4 * a * c;
	if (d < 0)
		return 0;
	else {
	*x1 = (-b + sqrt(d)) / (2 * a);
	*x2 = (-b - sqrt(d)) / (2 * a);
	return 1;
	}
	return 0;
}
