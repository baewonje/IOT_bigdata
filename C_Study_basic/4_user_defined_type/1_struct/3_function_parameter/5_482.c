#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

typedef struct {
	int xpos;
	int ypos;
} Point;

void main(){
	Point pos1 = { 1,2 };
	Point pos2;
	Point2 pos3;
	int arr[2] = { 1,2 };
	// ����ü�� ���� ������ ���� ���� ���ؼ��� �����ϴ�.
	//pos3 = pos1;
	pos2 = pos1;
	//����ü�� ���� ���길 �����ϰ� ��� ������ ������ ��Ÿ �ٸ� ������ �������� �ʴ´�.
	//pos2 +=pos1;


	printf("ũ��: %d \n", sizeof(pos1));
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("ũ��: %d \n", sizeof(pos2));
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);


}

