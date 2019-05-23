#include <stdio.h>
#pragma warning (disable:4996)

void find_odd(int* ptr, int size);
void find_even(int* ptr, int size);

void find_odd(int* ptr, int size) {
	int i;
	printf("È¦¼ö: ");
	for (i = 0; i < size; i++) {
		if (ptr[i] % 2 != 0)
			printf("%d ", ptr[i]);
	}

}
void find_even(int* ptr, int size) {
	int i;
	printf("\nÂ¦¼ö: ");
	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 == 0)
			printf("%d ", ptr[i]);
	}
}

void main(){
	int arr[10];
	int i;

	printf("ÃÑ 10°³ÀÇ ¼ýÀÚ¸¦ ÀÔ·Â\n");
	for(i=0;i<10;i++){
		printf("ÀÔ·Â: ");
		scanf("%d",&arr[i]);
	}
	find_odd(arr, sizeof(arr) / sizeof(int));
	find_even(arr, sizeof(arr) / sizeof(int));

}

