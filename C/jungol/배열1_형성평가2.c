#include<stdio.h>
int main()
{
    int a[5]={0,};
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    sum=a[0]+a[2]+a[4];
    printf("%d",sum);
}