#include <stdio.h>
// printf �Լ��� ������Ÿ��(proto type)
// int printf( const char *format [, argument]...);
// ���� ���� ������� ���� ��쿡�� ���ÿ��� ����ϴµ��� ������ ����.

void main(){
		int result=0;

		// printf �Լ��� ���� ���� ��µ� ��ü ����Ʈ ���� ����
		result = printf("123\n");
		printf("\"123\\n\" printf�� ��� %d\n", result);

		result = printf("abcd\n");
		printf("\"abcd\\n\" printf�� ��� %d\n", result);

		result = printf("@@@\n");
		printf("\"@@@\\n\" printf�� ��� %d\n", result);

		result = printf("������\n");
		printf("\"������\\n\" printf�� ��� %d\n", result);




}

