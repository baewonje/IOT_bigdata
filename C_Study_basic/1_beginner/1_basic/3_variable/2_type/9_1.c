#include <stdio.h>

void main(){
		int lt_cordinate;
		int rt_cordinate;
		int lb_cordinate;
		int rb_cordinate;
		int result1;
		int result2;
		int result3;

		printf("좌 상단의 x, y 좌표를 입력하세요 : ");
	   	scanf("%d %d", &lt_cordinate, &rt_cordinate); 


		printf("우 하단의 x, y 좌표를 입력하세요 : ");
	   	scanf("%d %d", &lb_cordinate, &rb_cordinate); 

		result1 = lt_cordinate-rt_cordinate;
		result2 = lb_cordinate-rb_cordinate;
		result3 = result1*result2;

		printf("%d\n", result3);
}
