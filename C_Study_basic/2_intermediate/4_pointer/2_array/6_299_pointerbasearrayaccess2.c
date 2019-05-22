#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		int arr[3]={11, 22, 33};
		int *ptr=arr;  //int *ptr=&arr[0]; 과 같은 문장
		
		printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));

		printf("%d %d %d \n", *(ptr+0), *(ptr+1), *(ptr+2));   // *(ptr+0)는 *ptr과 같다.
		printf("%d %d %d \n", ptr[0], ptr[1], ptr[2]);
		printf("%d %d %d \n", *(arr+0), *(arr+1), *(arr+2));  // *(arr+0)는 *ptr과 같다.

		printf("%d %d %d \n", ptr[0], arr[1], arr[2]);

	return 0;
}

