#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	char perid[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perid, sizeof(perid), stdin);

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s \n", perid);
	printf("이름: %s \n", name);


}

