#include <stdio.h>
#pragma warning (disable:4996)

void main(){

		int a=0;
		int b=0;
		int result;
		
		printf("첫번째 수:");
		scanf("%d",&a);
		printf("두번째 수:");
		scanf("%d",&b);

		result= a > b ? a-b:b-a;


		printf("%d",result);
}

