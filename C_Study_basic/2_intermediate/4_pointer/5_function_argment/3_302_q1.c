#include <stdio.h>
#pragma warning (disable:4996)

// call by value
// ����, �Լ� ����� ����� �Ϲ������� return�Ѵ�.

int squarebyvalue(int num){
		return num*num; // ���� ����� return ������ ��ȯ
}

//  call by reference
// - ����, �Լ��� ����� 2�� �̻��϶� ����� �� �ִ�.
// - �Լ��� ���� ũ�Ⱑ Ŭ ��쿡 �޸� ȿ������ ���ؼ� ����Ѵ�.
//	 �̷��� ��� ���� ���� �Լ� ������ ���������� ����Ǿ������� �ǹ̷�
//	 �Ϲ������� ����Ѵ�. 
void squarebyreference(int *ptr){
		//int num = *ptr;
		//*ptr = num*num;		// �������� ���� �ּҹ����� ���� ����.
		*ptr = *ptr * (ptr); 	// *ptr *ptr;
		// step1] *ptr = 10 *(*ptr);
		// step2] *ptr = 10 * 10;
		// step3] *ptr = 100;
}
void main(){
		int num=10;
		printf("%d\n", squarebyvalue(num));
		squarebyreference(&num);
		printf("%d\n", num);
}

