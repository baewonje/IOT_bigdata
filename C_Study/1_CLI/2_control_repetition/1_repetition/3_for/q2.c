#include <stdio.h>

void main(){
	int factorial;
	int multiple;
	int total=1;

	printf("��� �� ���� ������: ");
	scanf("%d", &factorial);

	for(multiple=1;factorial>=multiple;multiple++){
		total= total*multiple;
	}
	printf("������ ��:%d\n",total);
}
