#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

struct point {
	int xpos;
	int ypos;
};
void main(){
	struct point pos1 = { 1,2 };
	struct point pos2 = { 100,200 };
	struct point* pptr = &pos1;

	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	puts("pos1] ������ ����");
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);
	printf("[%d, %d] \n\n", pos1.xpos, pos1.ypos);

	pptr=& pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	puts("pos2] ������ ����");
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
	printf("[%d, %d] \n\n", pos2.xpos, pos2.ypos);

}

