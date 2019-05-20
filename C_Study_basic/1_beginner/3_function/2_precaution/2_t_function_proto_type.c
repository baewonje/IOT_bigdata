#include <stdio.h>

// 함수 정의부가 함수 호출하는 라인 밑에 있을 경우에는 컴파일 에러를 발생한다.
void main(){ 	  함수정의
	
		my_add(); 		
		}

void my_add(){			// 함수 정의부 (function definition)
		int number1;
		int number2;
		int result;

		printf("두 수를 입력하세요: ");
		scanf("%d %d", &number1, &number2);

		printf("\n- 간단한 덧셈 연산 ver1\n");
		printf("첫 번째 입력: %d\n", number1);
		printf("두 번째 입력: %d\n", number2);

		result = number1 + number2;
		printf("%d + %d = %d \b", number1, number2, result);
		printf("연산이 종료가 되었습니다. 감사합니다.\n");



void main(){ 	  // main함수는 C언어로 작성하면 프로그램 실행시 자동으로 호출되는 함수
				  // 따라서 C프로그램의 시작점(entry point)이 된다.
		printf("-- 메인 프로그램 구동 --\n");

		my_add(); // 함수 호출(function call)
		my_add();

		printf("-- 메인 프로그램 종료 -- \n");
	}

