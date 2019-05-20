#include <stdio.h>
int numbercompare(int num1, int num2);

void main(){
	// printf("문장 %d %d %d", n1, n2, n3); <= n1, n2, n3를 먼저 평가하고 그 다음에 포스터 포멧스트링와 매칭한다
 	printf("3과 4중에 큰 수는 %d 이다. \n", numbercompare(3,4));
	// step1] printf("3과 4중 큰 수는 %d 이다.\n", 4);
	// step2] printf("3과 4중 큰 수는 4 이다. \n");
 	printf("7과 2중에 큰 수는 %d 이다. \n", numbercompare(7,2));
	

}

 int numbercompare(int num1, int num2){
 	
	 	 // 조건에 따라서 다양한 값을 return 할 수 있다.
		/*
		 * 	case1
	if(num1>num2){
		return num1;
	}else{
		}return num2;
}
*/
/*  case2
 *
 	if(num1>num2){
		return num1;
	}else if (num2>num1){
		return num2;
	}else{
			return 0;
	}
*/

	// case 3
	if(num1>num2){
		return num1;
			}else if(num2>num1){
					return num2;
			}
					return 0;
					}
