#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		char str[100];
		int idx=0;

		printf("���ܾ �Է��ϼ���: ");
		scanf("%s",str);

		while(str[idx] != '\0'){
			idx++;
		}
		printf("�Է��Ͻ� ���ܾ��� ���� %d �Դϴ�.", idx);
}
