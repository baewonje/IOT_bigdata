#include <stdio.h>

// �Լ� ����(function prototype)
void my_add(void);

void main(){ 	 
	
		my_add(); 		
		}

void my_add(){			// �Լ� ���Ǻ� (function definition)
		int number1;
		int number2;
		int result;

		printf("�� ���� �Է��ϼ���: ");
		scanf("%d %d", &number1, &number2);

		printf("\n- ������ ���� ���� ver1\n");
		printf("ù ��° �Է�: %d\n", number1);
		printf("�� ��° �Է�: %d\n", number2);

		result = number1 + number2;
		printf("%d + %d = %d \b", number1, number2, result);
		printf("������ ���ᰡ �Ǿ����ϴ�. �����մϴ�.\n");



}