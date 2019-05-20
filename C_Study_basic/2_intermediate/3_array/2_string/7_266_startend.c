#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		char str[50]="test0]i like c programming";
		printf("string: %s\n", str);

		//str[8] ='\0';
		str[8] =0;
		printf("string: %s\n", str);

		str[6] ='\0';
		printf("string: %s\n", str);

}

