#include <stdio.h>
#pragma warning (disable:4996)
// my_sum함수를 사용하기 위해
// my_head.h 헤더 파일을 include
#include "my_head.h"

void main(){
	int result;
	
	result = my_sum(3,4);
	
	printf("3+4=%d\n", result);

}

