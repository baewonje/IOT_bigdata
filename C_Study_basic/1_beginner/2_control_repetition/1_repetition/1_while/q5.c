#include <stdio.h>

void main(){
		int num;
		int num2=0;
		int num3;
		int num4=0;
		double d_num1,d_num2,average;


		printf("몇개의 정수를 입력할 겁니까? : ");
		scanf("%d", &num);

		while(num2 < num  ){
				printf("개의 정수를 입력하세요 :");
				scanf("%d", &num3);
				num4= num4+num3;
				num2++;
		}
		d_num1 = num4;
		d_num2 = num;
		average = (double)d_num1/(double)d_num2;
		printf("총합의 평균 : %f\n", average);

		

}


