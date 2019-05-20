#include <stdio.h>

void main(){
	int mini;
	int max;
	int total=0;

	printf("최소 값: ");
	scanf("%d", &mini);
	printf("최대 값: ");
	scanf("%d", &max);

	for(;mini<=max;mini++){
		total= total+mini;
	}
	printf("총합: %d\n",total);
}
