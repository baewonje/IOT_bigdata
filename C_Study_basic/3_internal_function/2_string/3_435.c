#include <stdio.h>
#pragma warning (disable:4996)
#include <string.h>

void removebsn(char str[]){
	int len = strlen(str);
	str[len-1]=0;
}
void main(){
	char str[100];
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	printf("����: %d, ����: %s \n", strlen(str), str);

	removebsn(str);
	printf("����: %d, ����: %s \n", strlen(str), str);

}


