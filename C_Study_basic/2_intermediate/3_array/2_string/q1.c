#include <stdio.h>

void main (){
	int arr[5];
	int index;
	int	total=0;
	const int max_count=5;
	int average;
	int max=arr[1];
	int min=arr[0];

	for(index=0; index < max_count; index++){
			printf("%d ��° ���ڸ� �Է��ϼ���: ",index+1);
			scanf("%d", &arr[index]);
			total = total + arr[index];
		if(arr[index] > max){
				max = arr[index];
		}if(arr[index] < min){
				min = arr[index];
		}
	}
	printf("�Է��� ����(�Է� ������� ����): ");
	
	for(index=0;index<max_count;index++){
			printf("%d ", arr[index]);
	}
			average = total / max_count;
			printf("\n����: %d , ���: %d\n",total, average);

			printf("����ū�� %d\n", max);
			printf("�����ۼ� %d\n", min);
}

