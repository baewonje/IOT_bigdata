#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	char* line1="dear dean\n";
	char* line2 = "hello my friend!\n";
	char* line3 = "long time no see.\n";

	

	printf("2. fputs test ---- \n");
	printf("file 10을 아직 안 배웠으므로 line1~3을 읽어왔다고 가정\n");
	fputs(line1, stdout);
	fputs(line2, stdout);
	fputs(line3, stdout);

}

