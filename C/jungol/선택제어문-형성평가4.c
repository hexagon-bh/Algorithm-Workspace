#include <stdio.h>
#include <time.h>
int main()
{
	int a=0;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("dog");
		break;
		case 2:
		printf("cat");
		break;
		case 3:
		printf("chick");
		break;
	}
	if(a>3 | a==0)
	{
		printf("I don't know.");
	}
}
