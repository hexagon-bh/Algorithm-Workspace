#include <stdio.h>
int main()
{
    int a=0;
    int s=0;
    scanf("%d",&a);
    a--;
    for(int o=0;o<=a;o++)
    {
        for(int i=0;i<=o;i++)
        {
            printf("#");
        }
        printf("\n");
    }
        for(int p=a-1;p>=0;p--)
        {
            for(int j=0;j<=s;j++)
            {
                printf(" ");
            }
            s++;
            for(int q=0;q<=p;q++)
            {
                printf("#");
            }
            printf("\n");
        }
}