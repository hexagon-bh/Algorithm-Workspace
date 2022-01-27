#include <stdio.h>
int sub(int x)
{
 printf("----%d단-----\n",x);
 for(int i=1; i<=10; i++)
  printf(" %d * %d = %d\n",x,i,x*i);
 printf("------------\n",x);
 return 0;
}

int main()
{
 int x;
 printf("몇단을 출력할까요?: ");
 scanf("%d",&x);
 sub(x);
}