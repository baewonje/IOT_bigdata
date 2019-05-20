#include <stdio.h>

void main(){
		int num5=0;
		int count=0;
		int total=0;
		int count1=0;


		while(count1<5){
		
		while(num5<=0){

 			printf("1이상의 수를 5개를 입력하세요 : ");
			scanf("%d", &num5);
	
		}			
			total = total + num5;
			num5=0;
			count1++;
	}
			printf("총합 : %d\n", total);	
	
}
