#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int arr[6]={1,2,3,4,5,6};
	int *ptr=&arr[0];
	int *ptr1=&arr[5];
	int length;
	int i;
	int count=3;
	int total=0;

	length = sizeof(arr)/sizeof(int);

	for(i=0;i<count;i++){

	
		printf("%d%d",*ptr1,*ptr);
	}	

}

