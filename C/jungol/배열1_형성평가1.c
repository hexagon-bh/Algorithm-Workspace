#include <stdio.h>
int main()
{
    char a[10];
    for(int i=0;i<=9;i++)
    {
        scanf("%c",&a[i]);
    }
    for(int j=9;j>=0;j--)
    {
        printf("%c",a[j]);
    }
}