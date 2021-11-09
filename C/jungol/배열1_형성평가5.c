#include <stdio.h>
int main()
{
    float a[6]={0,};
    float sum=0;
    float avg=0;
    for(int i=0;i<=5;i++)
    {
        scanf("%f",&a[i]);
    }
    sum=a[1]+a[2]+a[3]+a[4]+a[5]+a[6];
    avg=sum/6;
    printf("%.1f",avg);
    
}