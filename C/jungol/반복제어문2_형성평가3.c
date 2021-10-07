//문제 - 정수를 입력받아서 1부터 입력받은 정수까지의 5의 배수의 합을 구하여 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
    int input,value=0;
    int a=1;
    scanf("%d",&input);
    while(a<=input)
    {
        if(a%5==0)
        {
            value=value+a;
        } 
    }
    printf("%d",value);
    return 0;
}