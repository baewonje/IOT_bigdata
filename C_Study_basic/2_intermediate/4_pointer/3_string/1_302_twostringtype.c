#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		char str1[]="my string";		// ���� ������ ���ڿ�
		char *str2="your string";		// ��� ������ ���ڿ�
		printf("%s %s \n", str1, str2);

		str2 ="our string";				// ����Ű�� ��� ����
		printf("%s %s \n", str1, str2);

		str1[0]='x';		// ���ڿ� ���� ����!
		str2[0]='x';		// ���ڿ� ���� ����!
		printf("%s %s \n", str1, str2);
		}

