#include <stdio.h>

void recursive(int num){
		if(num<=0){		// Àç±ÍÀÇ Å»ÃâÁ¶°Ç
			return;		// Àç±ÍÀÇ Å»Ãâ
		}

		printf("recursive call! %d \n", num);
		recursive(num-1);
}

void main (){
		recursive(3);
}
