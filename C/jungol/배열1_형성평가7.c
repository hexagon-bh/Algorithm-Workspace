#include <stdio.h>
int main()
{
    int a[100]={0,};
    for(int i=0;i<=100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=100 | a[i]>=999)
        {
            return 0;
        }
        if(a[i]==999)
        {
            a[i]==0;
            break;
        }
    }
}