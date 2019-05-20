// 교제 73P
#include <stdio.h>

void main(){

	int result;
	int num1;

	printf("세 개의 정수 입력: ");
	// 마지막 입력 이전의 입력들의 구분자는 공백문자이다.
	// 구분자 (separator, delimiter)
	scanf("%d", &num1);

	result = num1*num1;

	printf("(%d) = %d\n", num1, result);
}
