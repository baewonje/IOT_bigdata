#include <stdio.h>

void main(){
		int a;
		int b;
		int c;
	
		printf("3���� ���� �Է��ϼ���.: ");
		scanf("%d %d %d",&a,&b,&c);

		if(a<b){
			if(a<c){
			printf("���� ���� ���� %d�̴�.", a);
		}
		}else if(b<c){
			if(b<a){
			printf("���� ���� ���� %d�̴�.", b);
		}
		}
			else{
			printf("���� ���� ���� %d�̴�.", c);
	}
}
