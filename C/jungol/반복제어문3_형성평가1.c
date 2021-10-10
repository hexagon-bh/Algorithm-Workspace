#include <stdio.h>
int main()
{
    int a[20]={0,};
    int count=0;
    for(int i=0;i<=19;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)break;
        count++;
    }
    int avg,sum=0;
    for(int j=0;j<=count;j++)
    {
        sum=sum+a[j];
    }
    printf("SUM: %d",sum);
    avg=sum/count;
    printf(" AVG: %d",avg);
}