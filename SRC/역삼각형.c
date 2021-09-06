#include <stdio.h>
int sub(int a[5][5])
{
    for(int j=0;j<=4;j++)
    {
        for(int i=0;i<=4;i++)
        {
            printf("%3d",a[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int a[5][5]={0,};
    int b=0;
    for(int j=0;j<=4;j++)
    {
        for(int i=4-j;i<=4;i++)
        {
            b++;
            a[j][i]=b;
        }
    }
    sub(a);
}
