#include <stdio.h>

void main(){
		int sel;
		printf("M 오전, A 오후, E 저녁 ");
		printf("입력: ");
		scanf("%c", &sel);
		float_my_pi

		// switch에서 지정한 변수와 매칭이 되는 case의 이동은 한 번만 이루어진다.
		// 그리고 특별히 break를 만나지 안는 이상 끝까지 모든 명령문을 수행한다.
		// switch ()의 변수는 일반적으로 정수형(integral) 타입(문자를 표현하는 char 포함)사용하는 것이 원칙이다.
		switch(sel){
			case 'M':  // (if (sel == 'M' || sel == 'm')
			case 'm':
				printf("moring \n");
				break;
			case 'A':
			case 'a':
				printf("afternoon \n");
				break;
			case 'E':
				 'e':
				printf("evenig \n");
				break;
		}

/*		// switch()의 변수가 실수형이기 때문에 컴파일 에러를 발생한다.
		switch(my_pi){
				case 1.11:
					printf("1.11\n",)
				case 3.14	
					printf("3.4\n");
		}
*/

}

