#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	char perid[7];
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);
	fgets(perid, sizeof(perid), stdin);

	fputs("�̸� �Է�: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹι�ȣ: %s \n", perid);
	printf("�̸�: %s \n", name);


}

