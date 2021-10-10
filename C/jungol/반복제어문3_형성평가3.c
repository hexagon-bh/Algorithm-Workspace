#include <stdio.h>
int main()
{
    int a=0;
    scanf("%d",&a);
    for(int j=1;j<=a;j++)
    {
        for(int i=1;i<=j;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int o=a-1;o>=1;o--)
    {
        for(int p=o;p>=1;p--)
        {
            printf("*");
        }
        printf("\n");
    }
}