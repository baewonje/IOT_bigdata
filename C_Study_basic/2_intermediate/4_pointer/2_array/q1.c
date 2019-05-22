#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int arr[5]={1,2,3,4,5};
	int *ptr = arr;
	printf("%d %d %d %d %d \n", ptr[0]+2, ptr[1]+2,ptr[2]+2,ptr[3]+2,ptr[4]+2,ptr[5]+2);

}

