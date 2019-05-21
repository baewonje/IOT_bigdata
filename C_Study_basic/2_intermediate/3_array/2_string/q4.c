#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		char str[100];
		int idx;
		int max=str[0];
		int count;

		printf("영단어를 입력하세요: ");
		scanf("%s",str);

		while(str[idx] != '\0'){
				idx++;
			for(count = 0;count < idx;count++)
				if(max < str[idx])
					max = str[idx];
		}
	printf("아스키코드값이 가장 큰 단어: %c\n", max);
}

