#include <stdio.h>
int numbercompare(int num1, int num2);

void main(){
	// printf("���� %d %d %d", n1, n2, n3); <= n1, n2, n3�� ���� ���ϰ� �� ������ ������ ���佺Ʈ���� ��Ī�Ѵ�
 	printf("3�� 4�߿� ū ���� %d �̴�. \n", numbercompare(3,4));
	// step1] printf("3�� 4�� ū ���� %d �̴�.\n", 4);
	// step2] printf("3�� 4�� ū ���� 4 �̴�. \n");
 	printf("7�� 2�߿� ū ���� %d �̴�. \n", numbercompare(7,2));
	

}

 int numbercompare(int num1, int num2){
 	
	 	 // ���ǿ� ���� �پ��� ���� return �� �� �ִ�.
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
