#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		int num1=20;
		int num2=30;
		const int*ptr=&num1;
		const int *const ptr2 = &num1;
		*ptr=40;			// ptr 주소에서 가리키는 값 변경 가능
		ptr=&num2;		// ptr의 주소값 변경은 가능
		
		*ptr2=40;
		ptr2=&num2;
}

