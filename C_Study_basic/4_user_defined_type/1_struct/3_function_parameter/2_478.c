#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

struct Point{
	int xpos;
	int ypos;
};

// 구조체를 call by value로 전달한 형태
void showposition(struct Point pos) {
	printf("원본 값[%d, %d]\n", pos.xpos, pos.ypos);
	pos.xpos+=10;
	pos.ypos+=10;
	printf("showposition에서 수정 값[%d, %d]\n", pos.xpos, pos.ypos);
}

struct Point getcurrentposition(void) {
	struct Point cen;
	printf("input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void main(){
	// 구조체는 대입 연산이 가능하다.
	struct Point curpos = getcurrentposition();
	showposition(curpos);

	printf("main함수에서의 좌표 확인[%d, %d] \n", curpos.xpos, curpos.ypos);

}

