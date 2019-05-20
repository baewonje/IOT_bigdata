#include <stdio.h>

void main(){
		int a;
		int b=0;
		int c=1;

		printf(" ");
		scanf("%d",&a);
		a=a%3==0 ? a*b:a*c;
		if(a==0){
				printf("3의배수");
		}else{
				printf("3의 배수 아님");
		}

}

