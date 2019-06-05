#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)
typedef struct {
	int xpos;
	int ypos;
} Point;

void orgsymtrans(Point* ptr) {
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}
void showposition(Point pos) {
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}
void main(){
	Point pos = { 7, -5 };
	orgsymtrans(&pos);
	showposition(pos);
	orgsymtrans(&pos);
	showposition(pos);


}

