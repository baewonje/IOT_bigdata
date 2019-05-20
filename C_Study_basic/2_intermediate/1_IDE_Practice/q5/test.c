#include <stdio.h>
#pragma warning (disable:4996)


int is_prime(int num1);

int is_prime(num1) {
	int count = 0;
	int b = 0;


	for (num1 = 2; count < 10; num1++) {
		for (b = 2; b <= num1; b++) {
			if (num1 == b) {
				printf("10°³ ¼ö %d\n", num1);
				count++;
			}if (num1 % b == 0) {
				break;
			}
		
		}
	}
	return 0;
}

void main() {
	int num1=0;

	is_prime(num1);

}