#include <stdio.h>

void main(){
	int factorial;
	int multiple;
	int total=1;

	printf("°è½Â ÇÒ ¼ö¸¦ ¾²¼¼¿ä: ");
	scanf("%d", &factorial);

	for(multiple=1;factorial>=multiple;multiple++){
		total= total*multiple;
	}
	printf("°ö¼ÀÀÇ ÇÕ:%d\n",total);
}
