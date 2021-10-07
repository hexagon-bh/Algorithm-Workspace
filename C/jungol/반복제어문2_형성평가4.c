#include <stdio.h>
int main()
{
    int n=0;
    float avg,sum=0;
    scanf("%d",&n);
    float a[100]={0,};
    for(int i=1;i<=n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(int j=1;j<=n;j++)
    {
        sum=sum+a[j];
    }
    avg=sum/n;
    printf("%.2f",avg);
}