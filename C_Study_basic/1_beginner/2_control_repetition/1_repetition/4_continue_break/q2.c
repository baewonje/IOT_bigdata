#include <stdio.h>

void main(){
		int a;
		int z;


		for(a=1;a<10;a++){
			for(z=1;z<10;z++)
				if(a+z == 9)
				printf(" %d%d\n+%d%d\n----\n %d%d\n\n",a,z,z,a,a+z,a+z);
		}				
}

