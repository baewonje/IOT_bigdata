#include <stdio.h>

void main(){
		int num;
		printf("정수 입력: ");
		scanf("%d", &num);


		// if else if 는 위에 있는 if()가 참이면 나머지 else if 조건을 확인하지
		// 않고 전체 if else if 구조에서 빠져나온다.
		// if else if의 조건은 서로 중복이 되지 않아야 하며 중복이 되지 않는
		// 조건으로 if else if로 구성하였을때 single if로 작성하는 것보다
		// 불필요하게 조건을 체크하는게 없어진다.
		if(num<0){
				printf("입력 값은 0보다 작다. \n");
		}else if(num>0){
				printf("입력 값은 0보다 크다. \n");
		}else if(num==0){
				printf("입력 값은 0이다. \n");
		}


}

