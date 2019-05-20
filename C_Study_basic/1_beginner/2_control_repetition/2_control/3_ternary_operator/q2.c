#include <stdio.h>

void main(){

		int first=0;
		int second=0;
		int result;
		
		printf("첫번째 수:");
		scanf("%d",&first);
		printf("두번째 수:");
		scanf("%d",&second);

		result= first > second ? first-second:second-first;


		printf("%d",result);
}

