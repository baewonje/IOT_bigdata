#include <stdio.h>

void main(){
	int mini;
	int max;
	int total=0;

	printf("�ּ� ��: ");
	scanf("%d", &mini);
	printf("�ִ� ��: ");
	scanf("%d", &max);

	for(;mini<=max;mini++){
		total= total+mini;
	}
	printf("����: %d\n",total);
}
