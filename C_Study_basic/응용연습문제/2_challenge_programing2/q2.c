#include <stdio.h>
#pragma warning (disable:4996)



void main(){
	int arr[10];
	int i;
	int front = 0;
	int last = 9;
	int input_number;

	printf("�� 10���� ���ڸ� �Է�\n");
	for(i=0;i<10;i++){
		printf("�Է�: ");
		scanf("%d",&input_number);
		if (input_number % 2 != 0) {
			arr[front] = input_number;
			front++;
		}else {
			arr[last] = input_number;
			last--;
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}

