#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)
typedef enum{
	Do=1, re=2, mi=3, fa=4, so=5, la=6, ti=7
}Syllable;

void sound(Syllable Sy) {
	switch (Sy) {
	case Do:
		puts("���� �Ͼ� ������ ��"); return;
	case re:
		puts("���� �ձ� ���ڵ� ��"); return;
	case mi:
		puts("�̴� �Ķ� �̳���"); return;
	case fa:
		puts("�Ĵ� ���� �Ķ���"); return;
	case so:
		puts("���� ���� �ֹ��"); return;
	case la:
		puts("��� �������~"); return;
	case ti:
		puts("�ô� ���� �ó��� "); return;
	}
	puts("�� �Բ� �θ���` �������� �ֶ�õ� �ֵ�~ §!");
}

void main(){
	Syllable tone;
	for (tone = Do; tone <= ti; tone += 1)
		sound(tone);


}

