#include<stdio.h>
int main()
{
	int a[10]={3,1,5,6,7,2,8,4,9,0};
	int min=0;
	int b,n,t,i=0;
	
	for(int j=0;j<=8;j++)
	{
		min=a[j];
		for(i=j+1;i<=9;i++)
		{
			if(min>a[i])
			{
				min=a[i];
			}
		}
		
		for(int z=0;z<=9;z++)
		{
			if(a[z]==min)
			{
				t=a[j];
				a[j]=min;
				a[z]=t;
			}
		}
		
		
	}
	
	for(int c=0;c<=9;c++)
	{
		printf("%3d",a[c]);
	}
}
