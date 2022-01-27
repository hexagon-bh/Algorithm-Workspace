#include <stdio.h>
int main()
{
	int minsu[2]={0,};
	int kiyoung[2]={0,};
	scanf("%d %d",&minsu[0],&minsu[1]);
	scanf("%d %d",&kiyoung[0],&kiyoung[1]);
	if(minsu[0]>kiyoung[0] && minsu[1]>kiyoung[1])
	{
		printf("1"); 
	}
	else
	{
		printf("0");
	}
}
