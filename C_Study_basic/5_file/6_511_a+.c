#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 3

void main(){
	int ch, i;
	FILE* fp = fopen("data.txt", "a+");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}
	
	for (i = 0; i < CHAR_COUNT; i++) {
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fputc('1', fp);
	fputc('2', fp);
	fputc('3', fp);
	// fclose(fp);
	if (fclose(fp) == EOF) {
		puts("���� close ����!");
	}
}

