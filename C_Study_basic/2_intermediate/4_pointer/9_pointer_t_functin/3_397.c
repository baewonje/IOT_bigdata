#include <stdio.h>
#pragma warning (disable:4996)
void sosimplefunc(void) {
	printf("i'm so simple");
}

void main(){
	int num = 20;
	void* ptr;
	
	ptr = &num;		// ���� num�� �ּ� �� ����
	printf("%p \n", ptr);
	// �Ʒ� �ڵ�� �����Ͻ� ������ �߻��Ѵ�.
	// pointer to void Ÿ���� ���� �����޸𸮿� ���� ���ȴ�.
	// printf("num: %d\n", (int) * (ptr));

	ptr = sosimplefunc;			// �Լ� sosimplefunc�� �ּ� �� ����
	printf("%p \n", ptr);
	return 0;

}

