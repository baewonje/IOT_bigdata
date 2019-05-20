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
			printf("%d 번째 숫자를 입력하세요: ",index+1);
			scanf("%d", &arr[index]);
			total = total + arr[index];
		if(arr[index] > max){
				max = arr[index];
		}if(arr[index] < min){
				min = arr[index];
		}
	}
	printf("입력한 숫자(입력 순서대로 정렬): ");
	
	for(index=0;index<max_count;index++){
			printf("%d ", arr[index]);
	}
			average = total / max_count;
			printf("\n총합: %d , 평균: %d\n",total, average);

			printf("가장큰수 %d\n", max);
			printf("가장작수 %d\n", min);
}

