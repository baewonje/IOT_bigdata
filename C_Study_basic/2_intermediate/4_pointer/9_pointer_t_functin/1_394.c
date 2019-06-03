#include <stdio.h>
#pragma warning (disable:4996)
void simpleadder(int n1, int n2);
void simplesubstraction(int, int);
void showstring(char*);

void simpleadder(int n1, int n2) {
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}
void simplesubstraction(int n1, int n2){
		printf("%d - %d = %d \n", n1, n2, n1-n2);
}
void showstring(char *str){
		printf("%s \n", str);
}

void main(){
	char *str= "function pointer";
	int num1 = 10, num2 = 20;

	// void(*fptr1)(int, int) = simpleadder;
	void(*fptr1)(int, int) = simplesubstraction;
	// 컴파일시 pointer to function의 함수 원형과 매칭이될 함수의 원형이
	// 일치하는지에 대한 정합성 검사는 이루어 지지 않는다.
	// 따라서 잘못된 함수의 이름(주소)를 매칭했을 경우에는 런타임 에러가
	// 발생한다.
	// void(*fptr1)(int, int) = showstring;
	void (*fptr2)(char*) = showstring;

	/* 함수 포인터 변수에 의한 호출 */
	fptr1(num1, num2);
	fptr2(str);
	return 0;
}

