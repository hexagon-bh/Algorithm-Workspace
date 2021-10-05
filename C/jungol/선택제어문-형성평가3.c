#include <stdio.h>
#include <time.h>
int main()
{
	int a=0;
	scanf("%d",&a);
	if(a%400==0 | a%4==0 && a%100!=0)
	{
		printf("leap year");
	}
	else
	{
		printf("common year");
	}
}
