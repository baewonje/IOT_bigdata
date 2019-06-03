#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		char str1[20] = "first~";
		char str2[20] = "second";

		char str3[20] = "simple num: ";
		char str4[40] = "1234567890";

		/**** case 1 ****/
		strcat(str1, str2);
		puts(str1);

		/***** case 2 *****/
		strncat(str3, str4, 7);
		puts(str3);
		
	

}

