#include <stdio.h>
/* �� AND ����ǥ
 * A����	B����	C����	���
 * ����		����	����    ����
 * ����		����	��		����
 * ����		��		��		����
 * ��     	��		��		��
 * ��		����	����	����
 * ��		��		����	����
 * �� 		����	��		����
 * ����		��		����	��
 *
 */
void main(){
	int num1=10;
	int num2=12;
	int num3=11;
	int result;

	printf("num1: %d, num2: %d, num3:n%d\n", num1, num2, num3);

	// ���� && ���� && ����
	result = (num1 == 1 && num2 == 1 && num3 == 1);
	printf("(num1 == 1 && num2 == 1 && num3 == 1) => �� ���: %d\n", result);

	// ����  &&	���� && �� 
	result = (num1 == 1 && num2 == 1 && num3 == 11);
	printf("(num1 == 1 && num2 == 1 && num3 == 11) => �� ���: %d\n", result);

	// ���� && �� && ��
	result = (num1 == 1 && num2 == 12 && num3 == 11);
	printf("(num1 == 1 && num2 == 12 && num3 == 11) => �� ���: %d\n", result);

	// �� && �� && ��
	result = (num1 == 10 && num2 == 12 && num3 == 11);
	printf("(num1 == 10 && num2 == 12 && num3 == 11) => �� ���: %d\n", result);

	// �� && ���� && ����
	result = (num1 == 10 && num2 == 1 && num3 == 1);
	printf("(num1 == 10 && num2 == 1 && num3 == 1) => �� ���: %d\n", result);

	// �� && �� && ����
	result = (num1 == 10 && num2 == 12 && num3 == 1);
	printf("(num1 == 10 && num2 == 12 && num3 == 1) => �� ���: %d\n", result);

	// ���� && �� && ����
	result = (num1 == 1 && num2 == 12 && num3 == 1);
	printf("(num1 == 1 && num2 == 12 && num3 == 1) => �� ���: %d\n", result);

	// �� && ���� && ��
	result = (num1 == 10 && num2 == 1 && num3 == 11);
	printf("(num1 == 10 && num2 == 1 && num3 == 11) => �� ���: %d\n", result);
}
