#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		char str[100];
		int idx;
		int max=str[0];
		int count;

		printf("���ܾ �Է��ϼ���: ");
		scanf("%s",str);

		while(str[idx] != '\0'){
				idx++;
			for(count = 0;count < idx;count++)
				if(max < str[idx])
					max = str[idx];
		}
	printf("�ƽ�Ű�ڵ尪�� ���� ū �ܾ�: %c\n", max);
}

