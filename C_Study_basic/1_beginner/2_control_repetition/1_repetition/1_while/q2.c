#include <stdio.h>

void main(){
		int constant=0;
		int ploid=1;

		printf("출력할 숫자를 입력하세요 : ");
		scanf("%d", &constant);

		while(ploid < constant+1){
				printf("3의 배수:%d\n", ploid*3);
				ploid++;
		}

}
:w

