#include <stdio.h>

void main(){
		int kor, eng, math;
		int result;
		int avg=3;

		printf("�� ���� ���� �Է� : ");
		scanf("%d %d %d", &kor, &eng, &math);

		result= (kor+eng+math)/avg;


		if(result>=90){
				printf("A\n",result);
		}else if(result>=80){
				printf("B\n",result);
		}else if(result>=70){
				printf("C\n",result);
		}else if(result>=50){
				printf("D\n",result);
		}else if(result<50){
				printf("F\n",result);
		}

		printf("��� %d��", result);

}

