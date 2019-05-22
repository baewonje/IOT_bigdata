#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int arr[5]={1,2,3,4,5};
	int *ptr = arr;
	int i;
	int count=5;

	for(i=0;i<count;i++){
		
		(*ptr++)+=2;
	printf("%d ", arr[i]);
	}
}

