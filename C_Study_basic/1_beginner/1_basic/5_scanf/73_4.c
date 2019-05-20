// 교제 73P
#include <stdio.h>

void main(){
		int input_number1, input_number2;
		int result;
		int result2;
		
		

		printf("숫자를 입력하세요: ");
		scanf("%d", &input_number1);

		printf("숫자를 입력하세요: ");
		scanf("%d", &input_number2);

		result = input_number1/input_number2;
		result2 = input_number1%input_number2;
		
		printf("몫: %d, 나머지: %d ", result, result2);
}
