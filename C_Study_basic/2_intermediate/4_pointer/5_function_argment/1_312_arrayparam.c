#include <stdio.h>
#pragma warning (disable:4996)

void showarayelem(int *param, int len){
		int i;
		for(i=0; i<len; i++)
			printf("%d ", param[i]);
		printf("\n");
}

void main(){
		int arr1[3]={1, 2, 3};
		int arr2[5]={4, 5, 6, 7, 8};
		showarayelem(arr1, sizeof(arr1) / sizeof(int));
		showarayelem(arr2, sizeof(arr2) / sizeof(int));
}
