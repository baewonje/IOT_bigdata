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
	printf("�л� �̸�: %s \n", sptr->name);
	printf("�л� ������ȣ: %s \n", sptr->stdnum);
	printf("�б� �̸�: %s \n", sptr->school);
	printf("���� ����: %s \n", sptr->major);
	printf("�г�: %d \n", sptr->year);

}

void main(){	
	// const int max_size=3;
	// int max_size = 3;
	Student arr[ARR_SIZE];
	int i;

	for (i = 0; i < ARR_SIZE; i++) {
		printf("�̸�: "); scanf("%s", arr[i].name);
		printf("��ȣ: "); scanf("%s", arr[i].stdnum);
		printf("�б�: "); scanf("%s", arr[i].school);
		printf("����: "); scanf("%s", arr[i].major);
		printf("�г�: "); scanf("%d", &arr[i].year);

	}
	for (i = 0; i < ARR_SIZE; i++) {
		showstudentinfo(&arr[i]);
	}
}

