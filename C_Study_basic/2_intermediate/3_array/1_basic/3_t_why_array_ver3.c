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
	int number[5];
	int index;
	int	total=0;
	const int max_count=5;
	int average;

	for(index=0; index < max_count; index++){
			printf("%d ��° ���ڸ� �Է��ϼ���: ",index+1);
			scanf("%d", &number[index]);
			total = total + number[index];
	}
	printf("�Է��� ����(�Է� ������� ����): ");:
	
	for(index=0;index<max_count;index++){
			printf("%d ", number[index]);
	}
			average = total / max_count;
			printf("\n����: %d , ���: %d\n",total, average);
			printf("%d ��° ���ڴ� %d �Դϴ�.",3, number[3]);

			printf("�ٽ� ��ȸ�ϰ� ���� ���� ������ �Է��ϼ���: ");
			scanf("%d", &index);
			printf("%d ��° ���ڴ� %d �Դϴ�.",index, number[index-1]);
}

