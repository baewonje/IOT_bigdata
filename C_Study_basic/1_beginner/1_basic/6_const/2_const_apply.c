#include <stdio.h>

void main(){
		unsigned long long my_password = 1234567890123456789;
		unsigned long long input_password = 0;

		printf("password�� �Է��ϼ���. (19�ڸ� �̳�): ");
		scanf("%lld", &input_password);

		if(my_password == input_password){
				printf("password�� ��ġ�մϴ�. ���� �����մϴ�. \n");
				printf("���� ����Ǿ� �ִ� password�� %lld�Դϴ�.\n", my_password);
		}else{
			printf("password�� ����ġ�մϴ�. ���ư�����. \n");
		}
}
