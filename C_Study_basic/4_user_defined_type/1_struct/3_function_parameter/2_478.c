#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

struct Point{
	int xpos;
	int ypos;
};

// ����ü�� call by value�� ������ ����
void showposition(struct Point pos) {
	printf("���� ��[%d, %d]\n", pos.xpos, pos.ypos);
	pos.xpos+=10;
	pos.ypos+=10;
	printf("showposition���� ���� ��[%d, %d]\n", pos.xpos, pos.ypos);
}

struct Point getcurrentposition(void) {
	struct Point cen;
	printf("input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void main(){
	// ����ü�� ���� ������ �����ϴ�.
	struct Point curpos = getcurrentposition();
	showposition(curpos);

	printf("main�Լ������� ��ǥ Ȯ��[%d, %d] \n", curpos.xpos, curpos.ypos);

}

