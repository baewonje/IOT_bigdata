#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

void main(){
	// W���� ������ ���� ��쿡�� ���� ������ �ϰ� 
	// ������ ������ ���� ��� �ش������� ������ ���
	// �ʱ�ȭ�� ���¿��� ���� �ۼ��� ������ overwrite�Ѵ�.
	FILE* fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}
	
	fputc('A', fp);
	fputc('b', fp);
	fputc('c', fp);
	fputc('D', fp);
	// fclose(fp);
	if (fclose(fp) == EOF) {
		puts("���� close ����!");
	}
}

