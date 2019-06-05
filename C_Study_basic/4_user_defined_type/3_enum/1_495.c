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
		puts("도는 하얀 도라지 ♪"); return;
	case re:
		puts("레는 둥근 레코드 ♪"); return;
	case mi:
		puts("미는 파란 미나리"); return;
	case fa:
		puts("파는 예쁜 파랑새"); return;
	case so:
		puts("솔은 작은 솔방울"); return;
	case la:
		puts("라는 라디오고요~"); return;
	case ti:
		puts("시는 졸졸 시냇물 "); return;
	}
	puts("다 함께 부르세` 도레미파 솔라시도 솔도~ 짠!");
}

void main(){
	Syllable tone;
	for (tone = Do; tone <= ti; tone += 1)
		sound(tone);


}

