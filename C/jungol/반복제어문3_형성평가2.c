#include <stdio.h>
int main()
{
    int a=0;
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
        printf("%3d",a*i);
    }
}