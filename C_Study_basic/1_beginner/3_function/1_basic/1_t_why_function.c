#include <stdio.h>

void main(){
		int option;
		int number1;
		int number2;

		printf("두 수를 입력하세요: ");
		scanf("%d %d", &number1, &number2);

		printf("\n- 간단한 덧셈 연산 ver1\n");
		printf("첫 번째 입력: %d\n", number1);
		printf("두 번째 입력: %d\n", number2);

		result = number1 + number2;
		printf("%d + %d = %d \b", number1, number2, result);
		printf("연산이 종료가 되었습니다. 감사합니다.\n");

}

