#include <stdio.h>
#pragma warning (disable:4996)

void main(){

		// visual studio C �����Ϸ��� ���� �ʱ�ȭ ���� ���� ��쿡
		// �������� �ʱ�ȭ
		// ���ڿ��� ������ �� ������� ���ڿ��� ũ�⺸�� 1�� �� Ŀ���ϴ�.(null
		// �� ���� ����ϱ� ���Ͽ�
		char str[13];

		str[0] = 'g';
		str[1] = 'o';
		str[2] = 'o';
		str[3] = 'd';
		str[4] = '!';
		//str[5] = '\0';

		printf("�迭 str�� ũ��: %d\n", sizeof(str));
		printf("���ڿ� ��� : %s \n", str);

		str[12]='?';


}
