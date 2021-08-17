// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int a[9]={5,8,1,6,2,4,9,3,7};
    int number=1;
    int t_number=1;
    int t=0;

    for(int i=0;i<=7;i++)
    {
        while(a[number]<a[number-1])
        {
               t=a[number];
               a[number]=a[number-1];
               a[number-1]=t;
               number--;  
        }
        t_number++;;
        number=t_number;
    }

    for(int j=0;j<=8;j++)
    {
        printf("%3d",a[j]);
    }
}