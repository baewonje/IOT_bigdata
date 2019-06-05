#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 9

void main(){
	int ch, i;
	
	FILE* fp = fopen("data.txt", "w+");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return;
	}
	
	for (i = 0; i < CHAR_COUNT; i++) {
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fputc('1', fp);
	fputc('2', fp);
	fputc('3', fp);

	if (fclose(fp) == EOF) {
		puts("파일 close 실패!");
	}
}

