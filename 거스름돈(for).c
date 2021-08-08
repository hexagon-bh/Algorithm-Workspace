#include <stdio.h>
int main()
{
	int item=0;//물건값  
	int ip=0; //낸값  
	int op=0;
	int cash=50000;
	
	printf("물건의 가격을 설정해 주세요.\n물건 값: ");
	scanf("%d",&item);
	printf("\n얼마를 내셨나요?\n낸 값: ");
	scanf("%d",&ip);
	op=ip-item;
	if(ip<item)
	{
		return 0;
	}
	printf("거스름돈은 %d입니다.",op);
	
	
	
}
