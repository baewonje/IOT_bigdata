#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

struct person {
	char name[20];
	char phonenum[20];
	int age;
};

void main(){
	struct person arr[3] = {

	{"�̽±�", "012-1111-2222", 21},
	{"������", "111-1111-1111", 22},
	{"������", "101-1111-1211", 19}
	};
	
	int i;
	for (i = 0; i < 3; i++)
		printf("%s %s %d \n", arr[i].name, arr[i].phonenum, arr[i].age);

}

