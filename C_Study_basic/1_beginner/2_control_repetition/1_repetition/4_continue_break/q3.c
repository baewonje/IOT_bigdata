#include <stdio.h>

void main(){
		int num;

		printf("숫자 1개 : ");
		scanf("%d",&num);
		
		printf("%d는 양의 정수 입니까?",num);
		if(num>0){
			printf("true");
		}else{
			
		printf("fales");
		}

}

