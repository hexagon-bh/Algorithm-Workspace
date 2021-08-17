// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int a[9]={5,8,11,6,0,4,9,3,7};
    int number=0;
    int t_number=1;
    int t=0;

    for(int i=0;i<=8;i++)
    {
        for(int c=0;a[number+1]<a[number];c++)
        {
               t=a[number+1];
               a[number+1]=a[number];
               a[number]=t;
               number++; 
               if(number<0) continue;
        }
        t_number++;
        number=t_number;
    }
    for(int j=0;j<=8;j++)
            {
                printf("%3d",a[j]);
            } 
}