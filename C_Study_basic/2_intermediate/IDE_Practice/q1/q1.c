#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	double a=0;
	int result;
	printf("½Ç¼ö : ");
	scanf("%f", &a);

	if (a < 0) {
		a = a > 0 ? a*a : a *(-1);
	}
	result = a * a;
	printf("a : %f\n ",result);
	
}