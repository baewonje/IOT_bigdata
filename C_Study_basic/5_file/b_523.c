#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 3
void main(){
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "wt");
	int i;

	for (i = 0; i < CHAR_COUNT; i++) {
		printf("�̸� ���� ���� �� �Է�: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar();
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	

}

