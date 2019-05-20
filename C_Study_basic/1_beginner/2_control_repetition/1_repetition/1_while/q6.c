#include <stdio.h>

int main (void)
{
 int count, num;
 double average;
 int i=0, add=0;
 double dadd, dcount;

 printf("입력할 정수의 갯수:");
 scanf("%d",&count);

 while(i<count)
 {
  printf("정수입력:");
  scanf("%d",&num);
  add=add+num;

  i++;
 }

 dadd=add;
 dcount=count;
 average=dadd/dcount;                  
//이렇게 안하면 평균이 정수로 나온다.. 어떻게 해야되지?  (double)add/count 하면 된다.

 printf("정수의 총합의 평균 : %f",average);

 return 0;
}



