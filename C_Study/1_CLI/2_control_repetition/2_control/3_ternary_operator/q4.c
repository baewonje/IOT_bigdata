#include <stdio.h>

void main(){

		int a=0;
		int b=0;
		int result;
		
		printf("ù��° ��:");
		scanf("%d",&a);
		printf("�ι�° ��:");
		scanf("%d",&b);

		result= a > b ? a-b:b-a;


		printf("%d",result);
}

