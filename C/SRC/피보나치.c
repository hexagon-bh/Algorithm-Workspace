#include <stdio.h>
int main()
{
    int o=0;
    int p=1;
    int b=0;
    int sum=0;
    scanf("%d",&b);
    for(int i=0;i<=b-2;i++)
    {
        sum=o+p;
        o=p;
        p=sum;
    }
    printf("%d",p);
}
