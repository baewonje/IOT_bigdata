#include <stdio.h>
#pragma warning (disable:4996)

void is_palindrome(char* arr, int size);

void is_palindrome(char* arr, int size) {
	int i=0;
	for (i = 0; i < size / 2; i++) {
		if (arr[i] == arr[size-i-1]) {
		}else {
			printf("ȸ���� �ƴմϴ�.");
			return 0;
		}
	}
		printf("ȸ���Դϴ�.");
}

void main(){
	char arr[100];
	int i=0;
	int ptr;
	int input_number;
	
	printf("���ڿ� �Է�: ");
	scanf("%s", arr);
	while (arr[i] != '\0')
		i++;
	is_palindrome(arr, i);
	
}



