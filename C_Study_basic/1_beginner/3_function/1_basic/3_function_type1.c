#include <stdio.h>

// �Լ� ���� 1
// ��ȯ Ÿ�� : x 
// ���� : x
//
// void�� �ǹ̴� ����(nothing), �������� �ʰڴ�.
// �׸��� ���ڰ� ���� ��쿡�� void�� ���� �� �� �ִ�.
// void my_add(){
// �Ʒ��� ���� �Լ��� ��ȯ Ÿ���� �����ϸ� �Ϲ������δ� ������ ������ �߻��Ѵ�. (Ư�� �Ӻ���� �����Ϸ�)
// ���� ���� ������ ���Ͽ� ����� �������� ����!
// my_add(void){

void my_add(){			// �Լ� ���� (function definition)
		int number1;
		int number2;
		int result;

		printf("�� ���� �Է��ϼ���: ");
		scanf("%d %d", &number1, &number2);

		printf("\n- ������ ���� ���� ver1\n");
		printf("ù ��° �Է�: %d\n", number1);
		printf("�� ��° �Է�: %d\n", number2);

		result = number1 + number2;
		printf("%d + %d = %d \b", number1, number2, result);
		printf("������ ���ᰡ �Ǿ����ϴ�. �����մϴ�.\n");



void main(){ 	  // main�Լ��� C���� �ۼ��ϸ� ���α׷� ����� �ڵ����� ȣ��Ǵ� �Լ�
				  // ���� C���α׷��� ������(entry point)�� �ȴ�.
		printf("-- ���� ���α׷� ���� --\n");

		my_add(); // �Լ� ȣ��(function call)
		my_add();

		printf("-- ���� ���α׷� ���� -- \n");
		/*
		my_substraction();
		my_multiplication();
		my_multiplication();
		my_division();
		*/
}

