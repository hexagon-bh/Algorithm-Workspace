#include<stdio.h>
int main()
{
	int a[10]={3,1,5,6,7,2,8,4,9,0};
	int min=3;
	int b=0;
	for(int j=0;j<=9;j++)
	{
		for(int i=b;i<=9;i++)
		{
			if(min>a[i+1])
			{
				min=a[i+1];
			}
		}
		a[j]=min;
		min=a[j];
		b++;
	}
	
	for(int c=0;c<=9;c++)
	{
		printf("%3d",a[c]);
	}
}
