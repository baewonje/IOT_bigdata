#include <stdio.h>

void main(){
		int num1 = 4;
		int shift_left = num1 << 2; 
		int shift_right = shift_left >> 1;
		int result = (num1*shift_left/shift_right);

		printf("%d", result);


}
