// ���� 73P
#include <stdio.h>

void main(){
		int input_number1, input_number2;
		int result;
		int result2;
		
		

		printf("���ڸ� �Է��ϼ���: ");
		scanf("%d", &input_number1);

		printf("���ڸ� �Է��ϼ���: ");
		scanf("%d", &input_number2);

		result = input_number1/input_number2;
		result2 = input_number1%input_number2;
		
		printf("��: %d, ������: %d ", result, result2);
}
