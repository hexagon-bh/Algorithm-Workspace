#include<stdio.h>
int main()
{
    int a=0;
    scanf("%d",&a);
    a=a-1;
    for(int o=0;o<=a;o++)
    {
        for(int i=0;i<=a-o;i++)
        {
            printf(" ");
        }
        for(int j=0;j<=o;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
}