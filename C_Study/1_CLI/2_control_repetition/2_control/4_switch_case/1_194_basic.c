#include <stdio.h>

void main(){
		int num;
		printf("1�̻� 5������ ���� �Է�: ");
		scanf("%d", &num);

		// ���� : ������ ��Ī�̵Ǵ� ��� �������� if, else if, else �������� �����ϰ� ����ȭ�� �� �ִ�.
		// ���� : ������ ��Ī�� �Ǵ� ������ �����ϴ�.
		//		  ���ǽ� ǥ���� �Ұ��� : ex)���� ����
		//		  ��ø�Ǵ� case ����� �Ұ��� �ϴ�.
		switch(num){
			case 1:
				printf("1�� one \n");
				break;
			case 2:
				printf("2�� two \n");
				break;
			case 3:
				printf("3�� three \n");
				break;
			case 4:
				printf("4�� four \n");
				break;
			case 5:
				printf("5�� five \n");
				break;
			default:
				printf("i don't know!\n");
		}
			

}

