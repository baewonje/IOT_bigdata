#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int arr[6]={1,2,3,4,5,6};
	int *ptr=&arr[0];
	int *ptr1=&arr[5];
	int length;
	int i;
	int last;

	length = sizeof(arr)/sizeof(int);

	for(i=0;i<length/2;i++){
		last= *ptr;
		*ptr=*ptr1;
		*ptr1=last;
		ptr+=1;
		ptr1-=1;
	}	
	for(i=0;i<length;i++){
		printf("%d",arr[i]);
	}
}

