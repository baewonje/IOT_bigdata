#include <stdio.h>
// 목적 : C언어에서 문자 표현하기
// 아스키 코드표 : <BS>https://terms.naver.com/entry.nhn?docId=815406&cid=42344&categoryId=42344
// typedef char LG_small_int;
void main(){
		char c_A=65;
		// 숫자를 표현할 수 있는 모든 타입으로 아스키코드의 문자를
		// 출력할 수 있다. 하지만 100%의 의미가 없다.
		// 아스키 코드는 32~126까지 표현되기 때문에 가장작은 정수타입 char로 충분히
		// 표현 가능하기 때문이다.
		int i_A=65;
		char c_B=66;
		char c_Z=90;
		char c_a=97;
		char c_0=48;
		char c_special=38;

		printf("c_A변수의 정수값 : %d\n", c_A);
		printf("c_A변수의 문자값 : %c\n", c_A);
		printf("i_A변수의 문자값 : %c\n", i_A);
		printf("c_B변수의 문자값 : %c\n", c_B);
		printf("c_Z변수의 문자값 : %c\n", c_Z);
		printf("c_a변수의 문자값 : %c\n", c_a);
		printf("c_0변수의 문자값 : %c\n", c_0);
		printf("c_special변수의 문자값 : %c\n", c_special);
}
