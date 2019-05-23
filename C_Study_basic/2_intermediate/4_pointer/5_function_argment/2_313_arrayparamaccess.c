#include <stdio.h>
#pragma warning (disable:4996)

 void showarayelem(int *param, int len){
//void showarayelem(int param[], int len){
		int i;
		for(i=0; i<len; i++)
			printf("%d ", param[i]);
		printf("\n");
}
void addarrayelem(int *param , int len, int add){
// void addarrayelem(int param[] , int len, int add){
		int i;
		for(i=0; i < len; i++)
				param[i] += add;
}

void main(){
		int arr[3]={1, 2, 3};
		addarrayelem(arr, sizeof(arr) / sizeof(int), 1);
		showarayelem(arr, sizeof(arr) / sizeof(int));

		addarrayelem(arr, sizeof(arr) / sizeof(int), 2);
		showarayelem(arr, sizeof(arr) / sizeof(int));

		addarrayelem(arr, sizeof(arr) / sizeof(int), 3);
		showarayelem(arr, sizeof(arr) / sizeof(int));
}
