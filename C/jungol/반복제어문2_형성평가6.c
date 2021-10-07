#include <stdio.h>
int main()
{
    int max,min=0;
    int count=0;
    float sum,avg=0;
    printf("MAX: ");
    scanf("%d",&max);
    printf("MIN: ");
    scanf("%d",&min);
    while(min<=max)
    {
        if(min%3==0 || min%5==0)
        {
            sum=sum+min;
            count++;
        }
        min++;
    }
    printf("SUM: %.1f\n",sum);
    avg=sum/count;
    printf("AVG: %.1f",avg);

}
