#include <stdio.h>

void main(){

		int first=0;
		int second=0;
		int result;
		
		printf("ù��° ��:");
		scanf("%d",&first);
		printf("�ι�° ��:");
		scanf("%d",&second);

		result= first > second ? first-second:second-first;


		printf("%d",result);
}

