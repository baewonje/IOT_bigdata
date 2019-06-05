#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

typedef struct{
	int xpos;
	int ypos;
} Point;

void showposition(Point pos) {
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

Point getcurrentposition(void) {
	Point cen;
	printf("input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}
void main(){
	Point curpos = getcurrentposition();
	showposition(curpos);

	

}

