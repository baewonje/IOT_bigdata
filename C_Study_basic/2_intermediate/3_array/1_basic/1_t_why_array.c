#include <stdio.h>

void main (){
	int number1, number2, number3, number4, number5;
	int index;
	int max_number_count;
	int total, average;

	for(index=0; index < max_number_count; index++){
			printf("ù ��° ���ڸ� �Է��ϼ���: ");
			scanf("%d", &number1);

			printf("�� ��° ���ڸ� �Է��ϼ���: ");
			scanf("%d", &number2);

			printf("�� ��° ���ڸ� �Է��ϼ���: ");
			scanf("%d", &number3);

			printf("�� ��° ���ڸ� �Է��ϼ���: ");
			scanf("%d", &number4);

			printf("�٤ä� ��° ���ڸ� �Է��ϼ���: ");
			scanf("%d", &number5);

			printf("�Է��� ����(�Է� ������� ����): %d %d %d %d %d", number1, number2, number3, number4, number5);
			
			total=number1+number2+number3+number4+number5;
			average=total/5;

			printf("���� :%d , ���: %d\n",total, average);

			printf("�� ��° ���ڴ� %d �Դϴ�.", number3);

		
	}	
	
}

