#include <stdio.h>
#pragma warning (disable:4996)
#include <string.h>

void removebsn(char str[]){
	int len = strlen(str);
	str[len-1]=0;
}
void main(){
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	removebsn(str);
	printf("길이: %d, 내용: %s \n", strlen(str), str);

}


