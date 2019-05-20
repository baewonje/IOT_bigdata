#include <stdio.h>
#pragma warning (disable:4996)

int simplefunc1(void) {
	int num = 5;
	num++;
	printf("simplefunc1] num:%d\n", num);
	return num;
}
// 함수의 인자(argument) 매개변수, 파라메터(parameter) 은
// 지역변수와 같다. 값만 전달 받았을 뿐 다른 변수이며
// 함수 실행이 끝날 경우 소멸된다. (메모리상에서 사라진다.)
int simplefunc2(int num) {
	num++;
	printf("simplefunc2] num:%d\n", num);
	//함수내의 local variable은 호출 관께와 없이 다른 scope이다.
	
	// printf("main] result:%d\n", result);
	return num;

}

void main() {
	int num = 17;
	int result = 0;
	result = simplefunc1();
	printf("main] num: %d\n", num);
	result = simplefunc2(num);
	printf("main] num: %d\n", num);
	printf("main] result:%d\n", result);
}