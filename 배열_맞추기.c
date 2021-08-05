#include <stdio.h>
int main()
{
    int x[5]={2,1,3,4,5};
    int t=0;
    t=x[1];
    x[1]=x[0];
    x[0]=t;


    for(int i=0;i<=4;i++)
    {
        printf("%d",x[i]);
    }
}