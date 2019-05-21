#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char string[10] = "Good time";
	int length = sizeof(string);

	for(int i=0; i<length; i++){
		printf("%c",string[i]);
	}
}
