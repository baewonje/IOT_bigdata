#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		char str[100];
<<<<<<< HEAD
		int idx;
		int max=str[0];
		int count;
=======
		int idx=0;
		int chk;
		int max=0;
		
>>>>>>> 4cd5e9d249b18e3f374e016cc6363ba98397ab8a

		printf("���ܾ �Է��ϼ���: ");
		scanf("%s",str);

<<<<<<< HEAD
		while(str[idx] != '\0'){
				idx++;
			for(count = 0;count < idx;count++)
				if(max < str[idx])
					max = str[idx];
		}
	printf("�ƽ�Ű�ڵ尪�� ���� ū �ܾ�: %c\n", max);
=======
		while(str[idx] != '\0')
			idx++;
		
		for(chk = 0; chk < idx; chk++){
			if(str[chk] > max);
			max = str[chk];
		}	
		printf("�ƽ�Ű�ڵ� ���� ���� ū ���ܾ�:%c\n", max);
		return 0;
			

>>>>>>> 4cd5e9d249b18e3f374e016cc6363ba98397ab8a
}
