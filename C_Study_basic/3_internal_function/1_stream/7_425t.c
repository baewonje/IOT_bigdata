#include <stdio.h>
#pragma warning (disable:4996)

void main(){
		char str[7];

		// get�� ��ȯ���� �о���� ���ڿ��� ��ȯ�Ѵ�.
		// str�� call by reference�� ���� ��ȯ�ǹǷ� ���� ����̴�.
		// printf("%s", gets(str));
		gets(str);
		puts(str);
		// ������ 1
		// aa bb <- �Է� : ���鹮�ڸ� �����Ͽ� �Է��� �޴´�.
		// aa bb <- ���
	
		//������ 2
		// hello world! <- �Է�
		// ��Ÿ�� ���� �߻�(str�� ������� ū ���ڿ��� �Է¹޴°��� �õ��Ͽ��� ����)

}

