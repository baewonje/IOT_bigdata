#include <stdio.h>

void main(){
		int multiple;
		int a;
		
		for(multiple=1;multiple<10;multiple++){
		if(multiple%2!=0){
					continue;
		}
		for(a=1;a<10;a++){
			if(a>multiple){
			break;
			}

		printf("%d * %d = %d\n",multiple,a,a*multiple);
			
				
		}
		}	

}
