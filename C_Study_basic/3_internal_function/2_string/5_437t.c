#include <stdio.h>
#include <string.h>	
#pragma warning (disable:4996)

void main(){
	char str1[20] = "1234512345";
	char str2[20];
	char str3[5];

	// strncpy(str2, str1, sizeof(str2));
	// 널 값이 복사되지 않기 때문에 문자 배열써 의미가 있고
	// 문자열로써 기능을 수행 할 수 없다.
	strncpy(str2, str1, 6);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	
	strncpy(str3, str1, sizeof(str3));
	printf("str3: %s\n", str3);

	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
}

