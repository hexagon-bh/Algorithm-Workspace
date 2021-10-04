#include <stdio.h>
int main()
{
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    if(a>100 || b>100)
    {
        return 0;
    }
    if(a>b)//a>b -----> swap(a,b)
    {
        int t=0;
        t=b;
        b=a;
        a=t;
    }

    while(a!=b)
    {
        printf("%d ",a);
        a++;
    }
}