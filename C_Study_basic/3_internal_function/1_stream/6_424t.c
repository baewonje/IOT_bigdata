#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	char* line1="dear dean\n";
	char* line2 = "hello my friend!\n";
	char* line3 = "long time no see.\n";

	

	printf("2. fputs test ---- \n");
	printf("file 10�� ���� �� ������Ƿ� line1~3�� �о�Դٰ� ����\n");
	fputs(line1, stdout);
	fputs(line2, stdout);
	fputs(line3, stdout);

}

