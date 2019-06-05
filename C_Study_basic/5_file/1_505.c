#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

void main(){
	// W모드는 파일이 없을 경우에는 새로 생성을 하고 
	// 기존에 파일이 있을 경우 해당파일의 내용을 모두
	// 초기화한 상태에서 새로 작성한 내용을 overwrite한다.
	FILE* fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}
	
	fputc('A', fp);
	fputc('b', fp);
	fputc('c', fp);
	fputc('D', fp);
	// fclose(fp);
	if (fclose(fp) == EOF) {
		puts("파일 close 실패!");
	}
}

