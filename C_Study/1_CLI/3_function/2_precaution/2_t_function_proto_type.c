#include <stdio.h>

// �Լ� ���Ǻΰ� �Լ� ȣ���ϴ� ���� �ؿ� ���� ��쿡�� ������ ������ �߻��Ѵ�.
void main(){ 	  �Լ�����
	
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



void main(){ 	  // main�Լ��� C���� �ۼ��ϸ� ���α׷� ����� �ڵ����� ȣ��Ǵ� �Լ�
				  // ���� C���α׷��� ������(entry point)�� �ȴ�.
		printf("-- ���� ���α׷� ���� --\n");

		my_add(); // �Լ� ȣ��(function call)
		my_add();

		printf("-- ���� ���α׷� ���� -- \n");
	}

