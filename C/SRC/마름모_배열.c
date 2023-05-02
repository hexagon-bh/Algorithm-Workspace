#include<stdio.h>
int Sub(int A[5][5])
{
	int b=2;
	int c=2;
	int d=1;
	for(int j=0;j<5;j++)
	{
		if(j==3)
		{
			c=3;
			b=1;	
		}
		for(int s=0;s<=b;s++)
		{
		printf("   ");	
		}
		for(int i=b;i<=c;i++)
		{
		A[j][i]=d;
		printf("%3d",A[j][i]);
		d++
		}
		if(j<=2)
		{
		c++;
		b--;	
		}
		if(j>2)
		{
			c--;
			b++;
		}

		printf("\n");

	}	
	
}

	//異쒕젰
int main()
{
	int A[5][5]={0,};
	Sub(A);
}
