#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

void main(){
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("���� ���� ����");
		return -1;
	}
	printf("%c", fgetc(fp));
	printf("%c", fgetc(fp));
	
	printf("%s", fgets(str, sizeof(str),fp));
	printf("%s", fgets(str, sizeof(str), fp));

	fclose(fp);


}

