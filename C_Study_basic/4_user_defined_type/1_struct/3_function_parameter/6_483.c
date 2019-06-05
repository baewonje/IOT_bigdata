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
// call by reference type1: 인자에 대한 주소값을 넘겨줌
// 장점: 인자에 대한 메모리 카피 작업이 일어나지 않아서
//		프로그램 속도, 메모리 사용 효율을 높일 수 있다.
Point addpoint(Point* pos1, Point* pos2) {
	Point pos = { pos1->xpos + pos2->xpos, pos1->ypos + pos2->ypos };
	return pos;
}
Point addpoint2(Point* pos1, Point* pos2) {
// call by reference type2: 인자에 및 반환 값까지도 매개 변수로 처리하여 넘겨줌
// 장점: 호출하는 쪽에서 반환 값에 대한 메모리 카피가 일어나지 않아 프로그램 속도, 메모리 사용 효율을 높일 수 있다.
Point addpoint3(Point* pos1, Point* pos2,Point*pos3) {
	pos3->xpos = (pos1->xpos) + (pos2->xpos);
	pos3->ypos = (pos1->ypos) + (pos2->ypos);
}
//call by referenct type3: type2와 동일하며 추가적으로 반환값을 정의하며
//	해당 반환 값은 오로지 함수가 정상적으로 수했했는지에 대한 에러코드를 리턴함(실전에서 많이 사용)
// ex 0: 정상수행, 1: 인자 값의 문제, 2: segmantation fault....
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

