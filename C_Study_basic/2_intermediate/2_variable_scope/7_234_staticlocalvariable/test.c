#include <stdio.h>
#pragma warning (disable:4996)

void simplefunc(void) {
	// static ������ �Լ��� ������ ȣ��ȴ� �ϴ��� �� ����
	// �Ҹ���� �ʰ� ���Ӽ��� �����Ѵ�.
	static int num1 = 0;	 // �ʱ�ȭ ���� ������ �ʱ�ȭ
	int num2 = 0;
	num1++, num2++;
	printf("static: %d, local: %d\n", num1, num2);
}

void main() {
	int i;
	for (i = 0; i < 3; i++)
		simplefunc();
}