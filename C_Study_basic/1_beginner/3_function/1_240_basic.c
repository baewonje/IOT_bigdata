#include <stdio.h>

void recursive(int num){
		if(num<=0){		// ����� Ż������
			return;		// ����� Ż��
		}

		printf("recursive call! %d \n", num);
		recursive(num-1);
}

void main (){
		recursive(3);
}
