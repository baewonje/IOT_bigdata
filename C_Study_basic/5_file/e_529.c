#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

void main(){
/* ���� ���� */	
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);
	
	/* ���� ���� */
	fp = fopen("text.txt", "rt");
	
	/* seek_end test */	
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));
	/* seek_set test */	
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	/* seek_cur test */
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);
	

}

