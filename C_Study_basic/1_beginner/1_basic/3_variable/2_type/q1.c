#include <stdio.h>

void main(){
		int lt_cordinate;
		int rt_cordinate;
		int lb_cordinate;
		int rb_cordinate;
		int result1;
		int result2;
		int result3;

		printf("�� ����� x, y ��ǥ�� �Է��ϼ��� : ");
	   	scanf("%d %d", &lt_cordinate, &rt_cordinate); 


		printf("�� �ϴ��� x, y ��ǥ�� �Է��ϼ��� : ");
	   	scanf("%d %d", &lb_cordinate, &rb_cordinate); 

		result1 = lt_cordinate-rt_cordinate;
		result2 = lb_cordinate-rb_cordinate;
		result3 = result1*result2;

		printf("%d\n", result3);
}
