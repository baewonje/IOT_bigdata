#include <stdio.h>
#pragma warning (disable:4996)


void times_print(int num1);


void main() {
	int num1;
	int result;
	int num = 1;
	printf("±¸±¸´Ü :");
	scanf("%d", &num1);

	while (num < 10) {
		printf("%d * %d = %d\n", num1, num, num1 * num);
		num++;
	}
	}