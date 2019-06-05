#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)
void main() {
	int arr[10];
	int i;
	int a=9;
	int b=0;
	int num = 0;

	for (i = 0; i < 10; i++) {
			printf(": ");
		scanf("%d", &num);
		if (num % 2 == 0) {
			arr[a] = num;
			a--;
		}
		else {
			arr[b] = num;
			b++;
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d", arr[i]); 
	}
}

