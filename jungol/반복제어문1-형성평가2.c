#include <stdio.h>
int main()
{
	int a=1;
	int odd,even=0;
	while(a!=0)
	{
		scanf("%d",&a);
		if(odd%2==0)
		{
			odd++;	
		}
		if(odd%2==1)
		{
			even++;	
		} 
	}
	printf("odd : %d  even : %d",odd,even);
	 
	
}
