#include <stdio.h>
#pragma warning (disable:4996)

int second(int num1);

int second(num1) {
	int h, m, s;

	printf("수 입력: ");
	scanf("%d", &num1);

		h = num1 / 3600;
		m = (num1%3600) / 60;
		s = num1 % 60;
		printf("%d시 %d분 %d초", h, m, s);
}

void main() {
	int num1=0;

	second(num1);
}