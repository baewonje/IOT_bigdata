#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

void main(){
	FILE* src = fopen("hello.docx", "rb");
	FILE* des = fopen("hello_copied.docx", "wb");
	//FILE* src = fopen("car.jpg", "rb");
	//FILE* des = fopen("car_copied.jpg", "wb");
	char buf[20];
	int readcnt;

	if (src == NULL || des == NULL) {
		puts("파일오픈 실패 ");
		return 0;
	}
	
	while (1) {
		readcnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readcnt < sizeof(buf)) {
			if (feof(src) != 0) {
				fwrite((void*)buf, 1, readcnt, des);
				puts("파일 복사 완료 ");
				break;
			}
			else
				puts("파일 복사 실패");
			break;
		}
			fwrite((void*)buf, 1, sizeof(buf), des);
		}
		fclose(src);
		fclose(des);

}

