#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	char* str = "simple string";

	printf("1. puts test ----- \n");
	puts(str);
	puts("so simple string");

	printf("2. fputs test ---- \n");
	//fputs(str, stdout); printf("\n");
	fputs(str, stdout); putchar('\n');
	//fputs("so simple string", stdout);	printf("\n");
	fputs("so simple string", stdout);	putchar('\n');

	printf("3. end of main ---- \n");

}

