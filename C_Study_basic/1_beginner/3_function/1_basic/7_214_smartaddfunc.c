#include <stdio.h>

// �ؼ� : �� ���α׷��� �Լ��� 4���� ������ �����Ͽ� ���α׷��� �ϼ��ϴµ��� ������ �ξ���.
// ���������� �Լ��� ũ��� �Ϲ������� 50~100���� ������ �Ը� Ŀ���� ��쿡 �̸� �Լ�ȭ �Ѵ�.
// �ƴϸ� Ư�� ����� �����ϴ� ���� ��Ȯ�ϴٸ� ���� ���� ������ �Լ��� ���� �� �ִ�.

int add(int num1, int num2){ // ����:o ��ȯ��:o
	return num1 + num2;
}

void showaddresult(int num){ // ����:o ��ȯ��:x
	printf("������� ���: %d \n", num);
}
int readnum(void){           // ����:x ��ȯ��:o
	int num;
	scanf("%d", &num);
	return num;
}

void howtousethisprog(void){	// ����:x ��ȯ��:x
	printf("�Լ��� 4���� ������ ����� ���� ver1 == \n");
	printf("�� ���� ������ �Է��Ͻø� ���� ����� ��µ˴ϴ�. \n");
	printf("��! �׷� �ΰ��� ������ �Է��ϼ��� : ");
}

void main(void){
		int result, num1, num2;
		howtousethisprog();
		num1=readnum();
		num2=readnum();
		result = add(num1, num2);
		showaddresult(result);



}

