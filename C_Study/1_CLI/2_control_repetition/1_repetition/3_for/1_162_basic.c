#include <stdio.h>

void main(){
	int num=0;

	while(num<3){
			printf("hi~");
			num++;
	}
	printf("\n");

	// for(�ʱ��; ���ǽ�; ������){
	// statement; // ���ɹ�
	// statement; // ��ɹ�
	// }
	// ���� : �ݺ��� �Ǵ� ������ �ϳ��� ���ο��� ǥ���Ǳ� ������
	//        �ݺ� �帧�� ���Ͽ� ���������� ������ �� �ִ�.
	// ���� : �������� ������ ǥ���ϴµ����� ��������� �����Ѵ�.
	// Ȱ�� : ������ �ݺ�ó���� �� �� �����ϴ�.
	for(num=0;num<3;num++){
			printf("hi%d~",num);
	}
}