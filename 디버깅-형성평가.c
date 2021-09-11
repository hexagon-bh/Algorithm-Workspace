#include <stdio.h>
int main()
{
	float a,b,c=0;
	float sum,avg=0;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	sum=a+b+c;
	avg=sum/3;
	printf("%.2f\n",sum);
	printf("%.0f\n",avg);
}
