#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		char str[100];
		int idx=0;
		int chk;
		int max=0;
		

		printf("영단어를 입력하세요: ");
		scanf("%s",str);

		while(str[idx] != '\0')
			idx++;
		
		for(chk = 0; chk < idx; chk++){
			if(str[chk] > max);
			max = str[chk];
		}	
		printf("아스키코드 값이 가장 큰 영단어:%c\n", max);
		return 0;
			

}
