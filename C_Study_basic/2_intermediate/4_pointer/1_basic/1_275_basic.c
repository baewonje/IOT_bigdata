#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		int num=7;
		int *pnum;
		pnum = &num;

		printf("num: %d\n", num);
		// %p �ּҰ��� ����ϱ� ���� �ɼ�
		// �Ϲ� ������ �����ϰ� �ش� ������ �ּҰ��� ������
		// &[������]
		// ex) int num7=; =>&num
		printf("&num: %d\n", &num);
		// ������ ������ �����ϰ� �ش� ������ �ּҰ��� ������
		// �ش� ������ ����ϸ� �ȴ�.
		// ex) int *pnum; => pnum
		printf("pnum: %d\n", pnum);
		// ������ ������ ����Ű�� ���� ǥ���Ϸ���
		// *[������]���� �����ؾ� �Ѵ�.
		printf("pnum�� ����Ű�� ��: %d\n",*pnum);
/* ��� ���
 *  num: 7
	&num: 2816236
	pnum: 2816236
	pnum�� ����Ű�� ��: 7
*/
}

