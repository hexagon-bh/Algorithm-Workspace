#include <stdio.h>
//(리턴타입)(함수이름)(인자/variable)
int add(int num1,int num2)
{
    int answer=0;
    answer=num1+num2;
    return answer;
}

int main()
{
    int a=2;
    int b=5;
    int answer=0;
    answer=add(a,b);
    printf("%d",answer);
}