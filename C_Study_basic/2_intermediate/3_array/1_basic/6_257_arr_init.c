#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		int arr1[5]={1,2,3,4,5};
		// 배열의 크기를 지정하지 않아도 초기화를 해주면 해당 사이즈만큼
		// 배열의 크기를 자동으로 잡아준다.
		int arr2[]={1,2,3,4,5,6,7};

		int arr3[7]={1,2,3,4,5,6,7};
		// 일부분만 초기화 할 경우에는 나머지 값은 컴파일러에서 0으로 초기화 해준다.
		int arr4[5]={1,2};

		printf("배열 선언 끝");



}

