#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning (disable:4996)
typedef struct {
	char name[20];
	char phonenum[20];
	int age;
} Person;

void showpersoninfo(Person man) {
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phonenum);
	printf("age: %d \n", man.age);

}
// �Լ��� �⺻������ �Ѱ��� ���� ������ �� �ִ�.
// ������ �Ʒ��� ���� ����ü�� ����ϸ� ����ü�� ����� Ȱ���Ͽ�
// 2�� �̻��� ���� ���Ͽ� ������ �����ϴ�.
Person readpersoninfo(void) {
	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phone? "); scanf("%s", man.phonenum);
	printf("age? "); scanf("%d", &man.age);
	return man;
}

void main(){
	// ����ü�� ���ؼ��� ���� struct ���� ���Ͽ� c���� �����ϴ� ���
	// �⺻���� ���� ���� ������ �����ϰ� �ִ�.
	Person man = readpersoninfo();
	showpersoninfo(man);


}

