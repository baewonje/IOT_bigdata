#include <stdio.h>

void main(){
		int num;
		printf("���� �Է�: ");
		scanf("%d", &num);


		// if else if �� ���� �ִ� if()�� ���̸� ������ else if ������ Ȯ������
		// �ʰ� ��ü if else if �������� �������´�.
		// if else if�� ������ ���� �ߺ��� ���� �ʾƾ� �ϸ� �ߺ��� ���� �ʴ�
		// �������� if else if�� �����Ͽ����� single if�� �ۼ��ϴ� �ͺ���
		// ���ʿ��ϰ� ������ üũ�ϴ°� ��������.
		if(num<0){
				printf("�Է� ���� 0���� �۴�. \n");
		}else if(num>0){
				printf("�Է� ���� 0���� ũ��. \n");
		}else if(num==0){
				printf("�Է� ���� 0�̴�. \n");
		}


}

