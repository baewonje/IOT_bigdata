#include <stdio.h>

void main(){
		int a;
		int b=0;
		int c=1;

		printf(" ");
		scanf("%d",&a);
		a=a%3==0 ? a*b:a*c;
		if(a==0){
				printf("3�ǹ��");
		}else{
				printf("3�� ��� �ƴ�");
		}

}

