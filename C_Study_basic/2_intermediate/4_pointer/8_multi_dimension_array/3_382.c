#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		int num1=10, num2=20, num3=30, num4=40;
		int arr2d[2][4]={1,2,3,4,5,6,7,8};
		int i, j;

		int *whoa[4]={&num1, &num2, &num3, &num4};
		int (*whob)[4]=arr2d;

		printf("%d %d %d %d \n", *whoa[0], *whoa[1], *whoa[2], *whoa[3]);
		for(i=0;i<4;i++){
			printf("%d ", *whoa[i]);
		}
		printf("\n");
		

		for(i=0;i<2;i++){
			for(j=0;j<4;j++)
			// printf("%d ", whob[i][j]);
			// printf("%d ", (*(whob+i))[j]);
			// printf("%d ", *(whob[i]+j));
			 printf("%d ", *(*(whob+i)+j));
			printf("\n");
		}

}

