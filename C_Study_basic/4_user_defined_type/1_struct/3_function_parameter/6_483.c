#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

typedef struct {
	int xpos;
	int ypos;
}Point;
/*
Point addpoint(Point pos1, Point pos2) {
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
}
*/
// call by reference type1: ���ڿ� ���� �ּҰ��� �Ѱ���
// ����: ���ڿ� ���� �޸� ī�� �۾��� �Ͼ�� �ʾƼ�
//		���α׷� �ӵ�, �޸� ��� ȿ���� ���� �� �ִ�.
Point addpoint(Point* pos1, Point* pos2) {
	Point pos = { pos1->xpos + pos2->xpos, pos1->ypos + pos2->ypos };
	return pos;
}
Point addpoint2(Point* pos1, Point* pos2) {
// call by reference type2: ���ڿ� �� ��ȯ �������� �Ű� ������ ó���Ͽ� �Ѱ���
// ����: ȣ���ϴ� �ʿ��� ��ȯ ���� ���� �޸� ī�ǰ� �Ͼ�� �ʾ� ���α׷� �ӵ�, �޸� ��� ȿ���� ���� �� �ִ�.
Point addpoint3(Point* pos1, Point* pos2,Point*pos3) {
	pos3->xpos = (pos1->xpos) + (pos2->xpos);
	pos3->ypos = (pos1->ypos) + (pos2->ypos);
}
//call by referenct type3: type2�� �����ϸ� �߰������� ��ȯ���� �����ϸ�
//	�ش� ��ȯ ���� ������ �Լ��� ���������� �����ߴ����� ���� �����ڵ带 ������(�������� ���� ���)
// ex 0: �������, 1: ���� ���� ����, 2: segmantation fault....
Point minpoint(Point pos1, Point pos2) {
	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;
}
void main(){
	Point pos1 = { 5, 6 };
	Point pos2 = { 2,9 };
	Point result;

	result = addpoint(&pos1, &pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	result = minpoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);

	

}

