#include <stdio.h>

void main(){
	int num=0;
	int total=0;
	int count=0;
	// �����ϱ� ���� ������ ����
	while(count<=2){
		printf("���ڸ� �Է� �ϼ���: ");
		scanf("%d", &num);
		total = total + num;
		count++;
	}
	printf("%d",total);
}
