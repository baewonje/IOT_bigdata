#include <stdio.h>

void main(){
		int total=0;
		int num=1;



		printf("더 할 숫자를 입력하세요 : ");

		while(num != 0){
		scanf("%d", &num);
			
		total = num + total;
		
			printf("총합 : %d\n", total);
		}

}


