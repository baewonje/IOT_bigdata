#include <stdio.h>

void main(){
		int num=0;
		int multip=9;
		int result;


		printf("구구단을 입력하세요 : ");
		scanf("%d", &num);

		while(multip > 0){
				result = num*multip;
				printf("구구단: %d\n", result);
				multip--;
		}

}


