#include <stdio.h>
#pragma warning (disable:4996)
void simpleadder(int n1, int n2);
void simplesubstraction(int, int);
void showstring(char*);

void simpleadder(int n1, int n2) {
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}
void simplesubstraction(int n1, int n2){
		printf("%d - %d = %d \n", n1, n2, n1-n2);
}
void showstring(char *str){
		printf("%s \n", str);
}

void main(){
	char *str= "function pointer";
	int num1 = 10, num2 = 20;

	// void(*fptr1)(int, int) = simpleadder;
	void(*fptr1)(int, int) = simplesubstraction;
	// �����Ͻ� pointer to function�� �Լ� ������ ��Ī�̵� �Լ��� ������
	// ��ġ�ϴ����� ���� ���ռ� �˻�� �̷�� ���� �ʴ´�.
	// ���� �߸��� �Լ��� �̸�(�ּ�)�� ��Ī���� ��쿡�� ��Ÿ�� ������
	// �߻��Ѵ�.
	// void(*fptr1)(int, int) = showstring;
	void (*fptr2)(char*) = showstring;

	/* �Լ� ������ ������ ���� ȣ�� */
	fptr1(num1, num2);
	fptr2(str);
	return 0;
}

