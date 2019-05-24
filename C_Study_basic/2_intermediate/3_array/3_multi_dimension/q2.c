#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		int arr[3][2];
		int i, j;
		for(i=0; i<3; i++){
			for(j=0; j<2; j++){
			scanf("%d", &arr[i][j]);
			}
		}
		for(i=0; i<3; i++){
			for(j=0; j<2; j++)
				printf("%d",arr[i][j]);
			printf("\n");	
		}	
}
