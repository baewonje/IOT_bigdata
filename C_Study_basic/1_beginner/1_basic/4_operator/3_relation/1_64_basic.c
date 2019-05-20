#include <stdio.h>
/* 관계연산 진리표
 * A < B => A가 B보다 작은가?
 * A > B => A가 B보다 큰가?
 * A == B => A와 B가 같은가?
 * A != B => A와 B는 다른가? !는 not의 의미
 * A <= B => A가 B보다 작거나 같은가? (작아도 참,같아도 참)
 * A >= B => A가 B보다 크거나 같은가? (커도 참, 같아도 참)
 *
 * 참이면 1반환, 거짓이면 0반환
*/
void main(){
	int num1=10;
	int num2=12;

	int result;

	printf("num1: %d, num2: %d\n", num1, num2);

	result = (num1 < num2);
	printf("num1 < num2) => 평가 결과: %d\n", result);

	result = (num1 > num2);
	printf("num1 > num2) => 평가 결과: %d\n", result);

	result = (num1 == num2);
	printf("num1 == num2) => 평가 결과: %d\n", result);

	result = (num1 != num2);
	printf("num1 != num2) => 평가 결과: %d\n", result);

	result = (num1 <= num2);
	printf("num1 <= num2) => 평가 결과: %d\n", result);

	result = (num1 >= num2);
	printf("num1 >= num2) => 평가 결과: %d\n", result);

}
