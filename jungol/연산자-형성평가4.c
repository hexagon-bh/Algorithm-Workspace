#include <stdio.h>
int main()
{
	int a,b=0;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d %d\n",++a,b--);
	printf("%d %d",a,b);
}
