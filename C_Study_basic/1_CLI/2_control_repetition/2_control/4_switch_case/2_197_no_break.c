#include <stdio.h>

void main(){
		int sel;
		printf("M ����, A ����, E ���� ");
		printf("�Է�: ");
		scanf("%c", &sel);
		float_my_pi

		// switch���� ������ ������ ��Ī�� �Ǵ� case�� �̵��� �� ���� �̷������.
		// �׸��� Ư���� break�� ������ �ȴ� �̻� ������ ��� ��ɹ��� �����Ѵ�.
		// switch ()�� ������ �Ϲ������� ������(integral) Ÿ��(���ڸ� ǥ���ϴ� char ����)����ϴ� ���� ��Ģ�̴�.
		switch(sel){
			case 'M':  // (if (sel == 'M' || sel == 'm')
			case 'm':
				printf("moring \n");
				break;
			case 'A':
			case 'a':
				printf("afternoon \n");
				break;
			case 'E':
				 'e':
				printf("evenig \n");
				break;
		}

/*		// switch()�� ������ �Ǽ����̱� ������ ������ ������ �߻��Ѵ�.
		switch(my_pi){
				case 1.11:
					printf("1.11\n",)
				case 3.14	
					printf("3.4\n");
		}
*/

}

