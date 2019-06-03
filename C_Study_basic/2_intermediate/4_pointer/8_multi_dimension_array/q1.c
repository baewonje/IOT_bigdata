#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr1[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10,11,12},
		{13,14,15,16}
	};
	int arr2[4][4];
	int i, j;
	int k=3	;
	

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr2[j][k] = arr1[i][j];
		}
		k--;
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%d, ", arr2[j][i]);
		printf("%n");
		
	}
	

}
