#include <stdio.h>

void main(){
		const int password=1234;
		const unsigned char max_count=3;
		const unsigned char	iot_true=1;
		const unsigned char iot_false=0;		
		int input_password=0;
		int input_count=0;
		// is_�ǹ� <= flag ���� Ư�� �̺�Ʈ�� ����Ǿ����� Ȯ���ϴ� �뵵�� ����ϴ� ����
		int is_verified=iot_false;
		

		for(;input_count<max_count; input_count++){
		printf("�н����带 �Է��ϼ��� : ");
		scanf("%d", &input_password);

		if(password == input_password){
			printf("iot �����͹� ���� �����մϴ�.\n");
			is_verified = iot_true;
			break;
			}
		}

		//single if�� �ùٸ��� ����� ��
		if(is_verified == iot_false){
				printf("�н����� �ִ� ���� ȸ�� %d�� �ʰ��Ͽ����ϴ�. \n", max_count);
printf("�����Ƿ� Ȯ������ ��Ź�մϴ�.");
		}
		// ���࿡ �Ʒ��� ���� �ڵ尡 �߰��� �ȴٸ� �̴� ����� ����� single if�� �ƴϴ�.
		if(is_verified == iot_true){
				printf("\n ���� �Ϸ� �Ǿ����ϴ�.");
		}
}
