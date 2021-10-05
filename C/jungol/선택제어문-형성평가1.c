#include <stdio.h>
#include <time.h>
int main()
{
	int a,b=0;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>=b)
	{
		printf("%d",a-b);
	}
	else
	{
		printf("%d",b-a);
	}
}
