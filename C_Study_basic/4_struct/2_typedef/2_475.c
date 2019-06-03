#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

typedef struct point {
	int xpos;
	int ypos;
}Point;


typedef struct person {
	char name[20];
	char phonenum[20];
	int age;
}Person;


void main(){
	Point pos = { 10,20 };
	Person man = { "ÀÌ½Â±â", "111-1111-1111", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phonenum, man.age);
}

