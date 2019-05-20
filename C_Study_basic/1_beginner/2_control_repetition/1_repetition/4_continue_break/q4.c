#include <stdio.h>

void main(){
		int a;
		int b;
		int c;
	
		printf("3개의 수를 입력하세요.: ");
		scanf("%d %d %d",&a,&b,&c);

		if(a<b){
			if(a<c){
			printf("가장 작은 수는 %d이다.", a);
		}
		}else if(b<c){
			if(b<a){
			printf("가장 작은 수는 %d이다.", b);
		}
		}
			else{
			printf("가장 작은 수는 %d이다.", c);
	}
}
