#include <stdio.h>

// ���� : ���α׷��Ӱ� ���ϴ� �������� �ƹ����� ������� �̵�����
// ���� : �̵��� ���ؼ� ���α׷��Ӱ� �ǵ����� �ʾҴ� �Ǽ��� �߱� �� �� ����
// ��� : �ǹ������� goto���� ���� ������� �ʴ´�.
void main(){
		int num;
		printf("�ڿ��� �Է�: ");
		scanf("%d", &num);

		// goto [���̺� ��];
		// �ش� ���̺�� �̵��Ѵ�.
		//
		if(num==1)
			goto one;
		else if(num==2)
			goto two;
		else
			goto other;

	// [���̺� ��]: 
one:
	printf("1�� �Է��Ͽ����ϴ�.!\n");
	goto end;
two:
	printf("2�� �Է��Ͽ����ϴ�.!\n");
	goto end;
other:
	printf("�ٸ� ���� �Է� �Ͽ����ϴ�.!\n");
end:
	printf("end!=n");

}

