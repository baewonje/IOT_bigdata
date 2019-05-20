#include <stdio.h>
#pragma warning (disable:4996)


void times_print(int num1, int num2) {
	int num3 = 1;
	int big = 0;
	int small = 0;
	if (num1 < num2) {
		big = num2;
		small = num1;
	}else {
		big = num1;
		small = num2;
	}
	while (small <= big) {
		num3 = 1;
		while (num3 < 10) {
			printf("%d * %d = %d\n", small, num3, small * num3);
			num3++;
		}
		printf("\n");
		small++;
	}
}

void main(){
	int num1, num2;
	printf("¼ıÀÚ2°³: ");
	scanf("%d %d", &num1, &num2);

	times_print(num1, num2);
}


