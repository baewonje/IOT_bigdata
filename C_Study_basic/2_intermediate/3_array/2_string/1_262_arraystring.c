#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		// ���ڿ��� ""�ȿ� ���Ǹ� �Ѵ�.
		// �׷� �������� �ڵ����� null ���� �߰��� �ȴ�.
		char str[] = "good morning!";

		// char�� 1byte
		// g ~ ! 13���� ���� 13byte
		// ���⿡ null �߰� �Ǿ 14byte
		printf("�迭 str�� ũ��: %d\n", sizeof(str));
		printf("�� ���� ������ ���: %c \n", str[13]);
		printf("�� ���� ������ ���: %d \n", str[13]);

		str[12]='?';
		printf("���ڿ� ���: %s\n", str);
		


}
