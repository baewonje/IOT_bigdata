#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)
typedef struct {
	int xpos;
	int ypos;
} Point;
typedef struct {
	Point cen;
	double rad;
} Circle;

void showcircleinfo(Circle* cptr) {
	// cptr�� �ּ��̱� ������ �Ʒ��� �Ұ����� ����
	// cptr.center;
	//(cptr->cen)->xpos;
	//cptr->cen->xpos;
	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g \n\n", cptr->rad);
}

void main(){
	Circle c1 = { {1,2},3.5 };
	Circle c2 = { 2,4,5.9 };
	showcircleinfo(&c1);
	showcircleinfo(&c2);
	// c1�� �ּҰ� �ƴϱ� ������ -> �� �������� �ʴ´�.
	// c1 -> radius;
	c1.rad;
	c1.cen.xpos;
	c1.cen.ypos;

}

