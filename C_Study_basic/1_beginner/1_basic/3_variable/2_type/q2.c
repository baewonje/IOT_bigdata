#include <stdio.h>

void main(){
		float double1;
		float double2;
		float result1;
		float result2;
		float result3;
		float result4;


		printf("두개의 실수를 입력하세요 : ");
		scanf("%f %f", &double1, &double2);
		
		result1 = double1+double2;
		printf("%f\n", result1);

		result2 = double1-double2;
		printf("%f\n", result2);

		result3 = double1*double2;
		printf("%f\n", result3);
		
		result4 = double1/double2;
		printf("%f\n", result4);


}
