#include <stdio.h>

void main(){
	int num=0;
	int total=0;
	int count=0;
	// 누적하기 위한 변수를 선언
	while(count<=2){
		printf("숫자를 입력 하세요: ");
		scanf("%d", &num);
		total = total + num;
		count++;
	}
	printf("%d",total);
}
