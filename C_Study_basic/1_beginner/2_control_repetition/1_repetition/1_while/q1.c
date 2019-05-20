#include <stdio.h>

void main(){
		int limit=0;
		int num1=1;

		printf("출력할 숫자를 입력하세요 : ");
		scanf("%d", &limit);

		while(num1 <= limit){
				printf("hello world%d\n", num1);
				num1++;
		}

}

