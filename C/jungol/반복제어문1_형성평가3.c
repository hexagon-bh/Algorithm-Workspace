#include <stdio.h>
int main()
{
    int num;
    int sum = 0, i = 0;
    while(1)
    {
        scanf("%d", &num);
        if(num > 100 || 0 > num) break;
        sum += num;
        i++;
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f", sum/(float)i);
}