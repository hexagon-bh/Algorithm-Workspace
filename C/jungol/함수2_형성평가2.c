#include <stdio.h>
int sub();
int main()
{
    int a[2]={1,2};
    int b=0;
    int sum=0;
    scanf("%d",&b);
    for(int i=0;i<=a;i++)
    {
        sum=a[1]+a[2];
        a[1]=a[2];
        a[2]=sum;
    }
    printf("%d",a[2]);
}
