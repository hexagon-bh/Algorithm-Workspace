#include <stdio.h>
#include <time.h>
int main()
{
	int a=0;
	scanf("%d",&a);
	if(a==0)
	{
		printf("zero");
	}
	if(a>0)
	{
		printf("plus");
	}
	if(a<0)
	{
		printf("minus");
	}
}
