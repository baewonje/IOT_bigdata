#include <stdio.h>
#pragma warning (disable:4996)


void times_print(int num1);


void main() {
	int num1 = 4;
	int result;
	int num = 1;


	while (num1 < 9) {
		num = 1;

		printf("==== %d´Ü ====\n", num1);
		while (num < 10) {
			printf("%d * %d = %d\n", num1, num, num1 * num);
			num++;
		}
		printf("\n");
		num1++;
	}
}
