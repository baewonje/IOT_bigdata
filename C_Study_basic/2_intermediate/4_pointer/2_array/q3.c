#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int arr[5]={1,2,3,4,5};
	int *ptr=&arr[4];
	int i;
	int count=5;
	int total=0;

	for(i=0;i<count;i++){
		total=total+*ptr;
			*ptr--;
	}
		printf("%d ",total );
		

}

