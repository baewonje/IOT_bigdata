#include <stdio.h>
#pragma warning (disable:4996)

int second(int num1);

int second(num1) {
	int a = 1;
	int b = 0;
	int c = 0;

	printf("╪Ж ют╥б: ");
	scanf("%d", &num1);

	for (b= 2; b <= num1; b=b*2) {
		c++;
		printf("%d\n", c);
	}
}
	void main() {
	int num1 = 0;

	second(num1);
}