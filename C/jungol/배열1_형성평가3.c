#include <stdio.h>
int main()
{
    int a[10]={0,};
    int even=0;
    int odd=0;
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=1;j<=10;j++)
    {
        if(a[j]%2==0)
        {
            even=even+a[j];
        }
        else if(a[j]%2==1)
        {
            odd=odd+a[j];
        }
    }
    printf("홀수:%d",odd);
    printf("짝수:%d",even);
    
}