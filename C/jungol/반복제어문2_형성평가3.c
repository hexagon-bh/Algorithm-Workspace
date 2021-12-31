//문제 - 정수를 입력받아서 1부터 입력받은 정수까지의 5의 배수의 합을 구하여 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main()
{
	int a,c=0;
	int b=1;
	
	scanf("%d",&a);
	while (b<=a)
	{
		if(b%5==0)
		{
			c=c+b;
		}
		b++;
	}
	printf("%d",c);
}
