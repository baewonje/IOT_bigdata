#include <stdio.h>
#include <string.h>
#include <math.h>
#define ARR_SIZE 7

#pragma warning (disable:4996)

typedef struct {
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void showstudentinfo(Student* sptr) {
	printf("학생 이름: %s \n", sptr->name);
	printf("학생 고유번호: %s \n", sptr->stdnum);
	printf("학교 이름: %s \n", sptr->school);
	printf("선택 전공: %s \n", sptr->major);
	printf("학년: %d \n", sptr->year);

}

void main(){	
	// const int max_size=3;
	// int max_size = 3;
	Student arr[ARR_SIZE];
	int i;

	for (i = 0; i < ARR_SIZE; i++) {
		printf("이름: "); scanf("%s", arr[i].name);
		printf("번호: "); scanf("%s", arr[i].stdnum);
		printf("학교: "); scanf("%s", arr[i].school);
		printf("전공: "); scanf("%s", arr[i].major);
		printf("학년: "); scanf("%d", &arr[i].year);

	}
	for (i = 0; i < ARR_SIZE; i++) {
		showstudentinfo(&arr[i]);
	}
}

