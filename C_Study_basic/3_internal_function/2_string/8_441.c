#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	char my_password[] = "asd";
	char input_password[] = " asd";

	if (my_password == input_password)
		puts("일치합니다.");
	else
		puts("불일치합니다.");
	

}

