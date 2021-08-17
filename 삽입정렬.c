#include <stdio.h>
int main()
{
    int a[8]={5,8,1,6,2,4,9,3,7};
    int number=1;
    int t_number=1;
    int t=0;

    for(int i=0;i<=7;i++)
    {
        while(1)
        {
            if(a[number-1]<a[number])
            {
                continue;
            }
            else
            {
               t=a[number-1];
               a[number-1]=a[number];
               a[number]=t;
               number--;
            }    
        }
        t_number++;
        number=t_number;
    }

    for(int j=0;j<=8;j++)
    {
        printf("%d",a[j]);
    }
}