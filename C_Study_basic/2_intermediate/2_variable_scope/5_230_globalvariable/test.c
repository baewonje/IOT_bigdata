#include <stdio.h>
#pragma warning (disable:4996)

void add(int val);
int num; // global variable(전역변수)는 기본 0으로 초기화 됨


void main() {
	// global variable는 어디에서든지 (scope에 상관없이) 접근이 가능하다.:
	printf("num: %d\n", num);
	add(3);
	printf("num: %d\n", num);
	num++;	// global bariable(전역변수) num의 값 1 증가
	printf("num: %d\n", num);


}
void add(int val) {
	num += val;
}