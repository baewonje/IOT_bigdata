#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

void main(){
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		puts("파일 오픈 실패");
	}
	fputc('A', fp);
	fputc('B', fp);
	fputs("my name is hong \n", fp);
	fputs("your name is yoon \n", fp);
	fclose(fp);

}

