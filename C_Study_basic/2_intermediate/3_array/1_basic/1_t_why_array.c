#include <stdio.h>

void main (){
	int number1, number2, number3, number4, number5;
	int index;
	int max_number_count;
	int total, average;

	for(index=0; index < max_number_count; index++){
			printf("첫 번째 숫자를 입력하세요: ");
			scanf("%d", &number1);

			printf("두 번째 숫자를 입력하세요: ");
			scanf("%d", &number2);

			printf("세 번째 숫자를 입력하세요: ");
			scanf("%d", &number3);

			printf("네 번째 숫자를 입력하세요: ");
			scanf("%d", &number4);

			printf("다ㅓㅅ 번째 숫자를 입력하세요: ");
			scanf("%d", &number5);

			printf("입력한 숫자(입력 순서대로 저열): %d %d %d %d %d", number1, number2, number3, number4, number5);
			
			total=number1+number2+number3+number4+number5;
			average=total/5;

			printf("총합 :%d , 평균: %d\n",total, average);

			printf("세 번째 숫자는 %d 입니다.", number3);

		
	}	
	
}

