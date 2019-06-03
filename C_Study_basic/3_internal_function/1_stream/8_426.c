#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	char str[7];
	int i;
	/*
	for (i = 0; i < 3; i++) {
		fgets(str, sizeof(str), stdin);
		printf("read %d: %s \n", i + 1, str);
	}
	*/
	for (i = 0; i < 3; i++) {
		gets(str);
		printf("read %d: %s \n", i + 1, str);
		/*
		실행결과
		we
			read 1: we

			like
			read 2 : like

			you
			read 3 : you
			*/

}

