#include <stdio.h>
int main()
{
    int a=0;
    int b=1;
    scanf("%d",&a);
    while(a<=100)
    {
        printf("%d",a*b);
        b++;
    }
}