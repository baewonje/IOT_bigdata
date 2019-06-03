#include <stdio.h>
#pragma warning (disable:4996)
void sosimplefunc(void) {
	printf("i'm so simple");
}

void main(){
	int num = 20;
	void* ptr;
	
	ptr = &num;		// 변수 num의 주소 값 저장
	printf("%p \n", ptr);
	// 아래 코드는 컴파일시 에러를 발생한다.
	// pointer to void 타입은 추후 동적메모리와 같이 사용된다.
	// printf("num: %d\n", (int) * (ptr));

	ptr = sosimplefunc;			// 함수 sosimplefunc의 주소 값 저장
	printf("%p \n", ptr);
	return 0;

}

