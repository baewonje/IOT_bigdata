#include <stdio.h>
// ���� : C���� ���� ǥ���ϱ�
// �ƽ�Ű �ڵ�ǥ : <BS>https://terms.naver.com/entry.nhn?docId=815406&cid=42344&categoryId=42344
// typedef char LG_small_int;
void main(){
		char c_A=65;
		// ���ڸ� ǥ���� �� �ִ� ��� Ÿ������ �ƽ�Ű�ڵ��� ���ڸ�
		// ����� �� �ִ�. ������ 100%�� �ǹ̰� ����.
		// �ƽ�Ű �ڵ�� 32~126���� ǥ���Ǳ� ������ �������� ����Ÿ�� char�� �����
		// ǥ�� �����ϱ� �����̴�.
		int i_A=65;
		char c_B=66;
		char c_Z=90;
		char c_a=97;
		char c_0=48;
		char c_special=38;

		printf("c_A������ ������ : %d\n", c_A);
		printf("c_A������ ���ڰ� : %c\n", c_A);
		printf("i_A������ ���ڰ� : %c\n", i_A);
		printf("c_B������ ���ڰ� : %c\n", c_B);
		printf("c_Z������ ���ڰ� : %c\n", c_Z);
		printf("c_a������ ���ڰ� : %c\n", c_a);
		printf("c_0������ ���ڰ� : %c\n", c_0);
		printf("c_special������ ���ڰ� : %c\n", c_special);
}
