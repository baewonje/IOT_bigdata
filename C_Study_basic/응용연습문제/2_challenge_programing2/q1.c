#include <stdio.h>
#pragma warning (disable:4996)

void find_odd(int* ptr, int size);
void find_even(int* ptr, int size);

void find_odd(int* ptr, int size) {
	int i;
	printf("Ȧ��: ");
	for (i = 0; i < size; i++) {
		if (ptr[i] % 2 != 0)
			printf("%d ", ptr[i]);
	}

}
void find_even(int* ptr, int size) {
	int i;
	printf("\n¦��: ");
	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 == 0)
			printf("%d ", ptr[i]);
	}
}

void main(){
	int arr[10];
	int i;

	printf("�� 10���� ���ڸ� �Է�\n");
	for(i=0;i<10;i++){
		printf("�Է�: ");
		scanf("%d",&arr[i]);
	}
	find_odd(arr, sizeof(arr) / sizeof(int));
	find_even(arr, sizeof(arr) / sizeof(int));

}

