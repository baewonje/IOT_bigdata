#include <stdio.h>

void main(){
		int num=0;
		int multip=9;
		int result;


		printf("�������� �Է��ϼ��� : ");
		scanf("%d", &num);

		while(multip > 0){
				result = num*multip;
				printf("������: %d\n", result);
				multip--;
		}

}


