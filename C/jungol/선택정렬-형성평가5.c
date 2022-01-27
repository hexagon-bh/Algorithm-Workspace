#include <stdio.h>
int main()
{
	int month=0;
	printf("달을 입력해주세요.");
	scanf("%d",&month);
	if(month==2)
	{
		printf("28일");	
	}
	if(month==1 | month==3 | month==5 | month==7 | month==8 | month==10 | month==12 )
	{
		printf("31일");
	}
	if(month==4 | month==6 | month==9 | month==11)
	{
		printf("30일");
	}
	
}
