#include <stdio.h>
int main()
{
    int a[100]={0,};
    int i=0;
    for(i=0;i<=99;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0) break;
    }
    printf("%d %d %d",a[i-3],a[i-2],a[i-1]);

}