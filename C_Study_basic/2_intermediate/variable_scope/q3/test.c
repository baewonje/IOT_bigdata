#include <stdio.h>
#pragma warning (disable:4996)

int is_prime(number) {
	int count = 0;
	int division = 0;

	for (number = 2; count < 10; count++) {
		for (division = 1; division < number; division++) {
			if (number % division == 0) {
			}
		}
			printf("%d\n", number);
			number++;
		
	}
		return 0;
}
	void main() {
		int number=0;


		is_prime(number);

	
}
