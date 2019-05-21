#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		char str[100];
		int idx=0;

		printf("영단어를 입력하세요: ");
		scanf("%s",str);

		while(str[idx] != '\0'){
			idx++;
		}
		printf("입력하신 영단어의 수는 %d 입니다.", idx);
}

