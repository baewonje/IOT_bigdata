#include <stdio.h>

int main (void)
{
 int count, num;
 double average;
 int i=0, add=0;
 double dadd, dcount;

 printf("�Է��� ������ ����:");
 scanf("%d",&count);

 while(i<count)
 {
  printf("�����Է�:");
  scanf("%d",&num);
  add=add+num;

  i++;
 }

 dadd=add;
 dcount=count;
 average=dadd/dcount;                  
//�̷��� ���ϸ� ����� ������ ���´�.. ��� �ؾߵ���?  (double)add/count �ϸ� �ȴ�.

 printf("������ ������ ��� : %f",average);

 return 0;
}



