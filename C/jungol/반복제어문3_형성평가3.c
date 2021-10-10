
#include <stdio.h>
int main()
{
    int a=0;
    scanf("%d",&a);
    for(int j=1;j<=a;j++)
    {
    printf("*");
    }
    printf("\n");
    for(int z=a;z>=1;z--)
    {
        printf("*");
    }
    printf("\n");
}