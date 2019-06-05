#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

void main(){
	int arr[] = { 1,2,3,4,5,6 };
	int* ptr1=arr;
	int*ptr2=&arr[5] ;
	int i;
	int temp;
	int a;

	a=(sizeof(arr)/sizeof(int));

	for (i = 0; i <a/2 ; i++) {
			temp = *ptr1;
			*ptr1 = *ptr2;
			*ptr2 = temp;
			*ptr1++;
			*ptr2--;
	}
	for (i = 0; i < 6; i++) {
		printf("%d", arr[i]);
	
	}
}

