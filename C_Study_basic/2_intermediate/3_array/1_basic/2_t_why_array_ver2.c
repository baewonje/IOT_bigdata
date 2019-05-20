#include <stdio.h>
/*
		
첫 번째 숫자를 입력하세요: 1
두 번째 숫자를 입력하세요: 2
세 번째 숫자를 입력하세요: 3
네 번째 숫자를 입력하세요: 4
다ㅓㅅ 번째 숫자를 입력하세요: 5
입력한 숫자(입력 순서대로 저열): 1 2 3 4 5총합 :15 ,
세 번째 숫자는 3 입니다.첫 번째 숫자를 입력하세요:			
*/
void main (){
	int number;
	int index;
	int	total=0;
	int max_count=5;
	int average;

	for(index=0; index < max_count; index++){
			printf("%d 번째 숫자를 입력하세요: ",index+1);
			scanf("%d", &number);
			total = total + number;
	}
	/*		아래 화면 출력 요구사항을 기존 방식대로 할 경우 구현하기가 어려움
			printf("입력한 숫자(입력 순서대로 저열): %d %d %d %d %d\n", number1, number2, number3, number4, number5);
	*/	
			average = total / max_count;

			printf("총합 :%d , 평균: %d\n",total, average);

			/*아래 화면 출력 요구사항으로 하면 표현하기 어려움
			printf("세 번째 숫자는 %d 입니다.", number3);
*/
			

}

