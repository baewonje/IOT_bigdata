#include <stdio.h>
#pragma warning (disable:4996)

int whoisfirst(int age1, int age2, int (*cmp)(int n1, int n2)){
		return cmp(age1, age2);
}
int olderfirst(int age1, int age2){
		if(age1>age2)
				return age1;
		else if(age1<age2)
				return age2;
		else 
				return 0;
}
int youngerfirst(int age1, int age2){
		if(age1<age2)
				return age1;
		else if(age1>age2)
				return age2;
		else 
				return 0;
}
		
void main(){
	int age1=20;
	int age2=30;
	int first;

	printf("������� 1 \n");
	first=whoisfirst(age1, age2, olderfirst);
	printf("%d���� %d�� �� %d���� ���� ����! \n\n", age1, age2, first);

	printf("������� 2 \n");
	first=whoisfirst(age1, age2, youngerfirst);
	printf("%d���� %d�� �� %d���� ���� ����! \n\n", age1, age2, first);



}
