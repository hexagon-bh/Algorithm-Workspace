#include <stdio.h>
int multiplication_table(int number)
{
    for(int i=1;i<=9;i++)
    {
        printf("%d * %d = %d",number,i,number*i);
    }
}
int main()
{
    int a,b=0;
    printf("출력할 구구단의 범위를 입력하세요!\n: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        int t=0;
        t=b;
        b=a;
        a=t;
    }
    for(int o=a;o<=b;o++)
    {
        multiplication_table(o);
        printf("\n");
    }
}