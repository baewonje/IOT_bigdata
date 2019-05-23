#include <stdio.h>
#pragma warning (disable:4996)

void is_palindrome(char* arr, int size);

void is_palindrome(char* arr, int size) {
	int i=0;
	for (i = 0; i < size / 2; i++) {
		if (arr[i] == arr[size-i-1]) {
		}else {
			printf("회문이 아닙니다.");
			return 0;
		}
	}
		printf("회문입니다.");
}

void main(){
	char arr[100];
	int i=0;
	int ptr;
	int input_number;
	
	printf("문자열 입력: ");
	scanf("%s", arr);
	while (arr[i] != '\0')
		i++;
	is_palindrome(arr, i);
	
}



