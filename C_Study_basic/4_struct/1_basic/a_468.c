#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

struct point {
	int xpos;
	int ypos;
};
struct person {
	char name[20];
	char phonenum[20];
	int age;
};
void main(){
	struct point pos = { 10,20 };
	struct person man = { "�̽±�", "111-1111-1111", 21 };
	printf("%p %p \n", &pos, &pos.xpos);
	printf("%p %p \n", &man, man.name);

}

