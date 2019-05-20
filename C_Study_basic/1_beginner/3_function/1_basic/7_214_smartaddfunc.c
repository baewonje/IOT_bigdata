#include <stdio.h>

// 해석 : 이 프로그램은 함수의 4가지 유형을 적용하여 프로그램을 완성하는데에 초점을 두었다.
// 실전에서는 함수의 크기는 일반적으로 50~100라인 정도로 규모가 커졌을 경우에 이를 함수화 한다.
// 아니면 특정 기능을 수행하는 것이 명확하다면 보다 작은 라인의 함수도 만들 수 있다.

int add(int num1, int num2){ // 인자:o 반환값:o
	return num1 + num2;
}

void showaddresult(int num){ // 인자:o 반환값:x
	printf("덧셈결과 출력: %d \n", num);
}
int readnum(void){           // 인자:x 반환값:o
	int num;
	scanf("%d", &num);
	return num;
}

void howtousethisprog(void){	// 인자:x 반환값:x
	printf("함수의 4가지 유형을 사용한 계산기 ver1 == \n");
	printf("두 개의 정수를 입력하시면 덧셈 결과가 출력됩니다. \n");
	printf("자! 그럼 두개의 정수를 입력하세요 : ");
}

void main(void){
		int result, num1, num2;
		howtousethisprog();
		num1=readnum();
		num2=readnum();
		result = add(num1, num2);
		showaddresult(result);



}

