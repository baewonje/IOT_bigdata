#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int num;
	int i = 2;
	int a;
	int c = 0;

	for (num = 0; num < 10;)

	{
		for (a=1;i>=a;a++)
		{
			if (i % a == 0)
				c++;
		}
		if (c == 2)
		{
		num++;
		printf("%d ", i);
		}

		c = 0;
		i++;
	}

}

