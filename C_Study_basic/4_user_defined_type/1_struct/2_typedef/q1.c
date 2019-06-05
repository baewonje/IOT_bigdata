#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

void main(){
	int n1 = 10;
	int n2 = 20;
	int* p1 = &n1;
	int* p2 = &n2;
	int temp;
	*p1 += 10;
	*p2 -= 10;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("%d %d", *p1, *p2);
	}

