#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)

struct point {
	int xpos;
	int ypos;
};

struct person {
	char name[20];
	char phonenum [20] ;
	int age;
};

void main(){
	struct point my_pos = { 10,20 };
	struct person man1, man2;
	// �Ʒ� person�� ������ �ƴ϶� Ÿ���̱� ������ ������ �� ����.
	// strcpy(person.name, "ȫ�浿");
	strcpy(man1.name, "�ȼ���");
	strcpy(man1.phonenum, "010-1122-3344");
	man1.age = 23;

	// struct ������ ������ ���� �ּҴ� ����� Ÿ�Կ� ����
	// �����ȴ�.
	printf("�̸� �Է�: "); scanf("%s", man2.name);
	printf("��ȣ �Է�: "); scanf("%s", man2.phonenum);
	printf("���� �Է�: "); scanf("%d", &(man2.age));  

	printf("�̸� �Է�: %s \n", man1.name);
	printf("��ȣ �Է�: %s \n", man1.phonenum);
	printf("���� �Է�: %d \n", man1.age);

	printf("�̸� �Է�: %s \n", man2.name);
	printf("��ȣ �Է�: %s \n", man2.phonenum);
	printf("���� �Է�: %d \n", man2.age);



}