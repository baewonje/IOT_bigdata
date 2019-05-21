#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		int *pnum;
		
		// pnum 주소는 위에서 초기화 되지 않았다.
		// 따라서 어느 위치에 값을 할당할지 정확히 모른다.
		// 이러한 상황에서 값을 쓰려고 할 경우에는
		// 일반적으로 런타임 에러를 발생한다.
		// (시스템이 비정상 종료될 가능성이 99%이상이다.)
		// 포인터 변수가 가리키는 곳의 값을 변경하려고 할 경우에는
		// 해당 영역이 안전하게 할당되었는지 확인해야 한다.
		*pnum = 7;
		
		printf("num1: %d\n", num1);
		printf("*pnum: %d\n", *pnum);

}

