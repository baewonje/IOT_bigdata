#include <stdio.h>
/*
		
ù ��° ���ڸ� �Է��ϼ���: 1
�� ��° ���ڸ� �Է��ϼ���: 2
�� ��° ���ڸ� �Է��ϼ���: 3
�� ��° ���ڸ� �Է��ϼ���: 4
�٤ä� ��° ���ڸ� �Է��ϼ���: 5
�Է��� ����(�Է� ������� ����): 1 2 3 4 5���� :15 ,
�� ��° ���ڴ� 3 �Դϴ�.ù ��° ���ڸ� �Է��ϼ���:			
*/
void main (){
	int number;
	int index;
	int	total=0;
	int max_count=5;
	int average;

	for(index=0; index < max_count; index++){
			printf("%d ��° ���ڸ� �Է��ϼ���: ",index+1);
			scanf("%d", &number);
			total = total + number;
	}
	/*		�Ʒ� ȭ�� ��� �䱸������ ���� ��Ĵ�� �� ��� �����ϱⰡ �����
			printf("�Է��� ����(�Է� ������� ����): %d %d %d %d %d\n", number1, number2, number3, number4, number5);
	*/	
			average = total / max_count;

			printf("���� :%d , ���: %d\n",total, average);

			/*�Ʒ� ȭ�� ��� �䱸�������� �ϸ� ǥ���ϱ� �����
			printf("�� ��° ���ڴ� %d �Դϴ�.", number3);
*/
			

}

