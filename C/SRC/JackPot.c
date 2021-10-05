#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int home(int start);

void main()
{
	int start,next=0;
	int a, b ,c=0;
	
	while(1)
	{
		home(start);
		printf("\n코인을 넣어주세요!(1.코인넣기//2.그만하기)>> ");
		scanf("%d",&next);
		if(next==2)
		{
			system("cls");
			home(start);
		}
		if(next>2 || next<=0)
		{
			printf("잘못 입력하셨습니다.");
			system("cls");
			home(start);
		}
		srand((unsigned) time(NULL));
	    a=rand()%7+33;
	    b=rand()%7+33;
	    c=rand()%7+33;
	        
		printf("----------------\n");
		printf("| %c | %c | %c |\n",a,b,c);
		printf("----------------\n");
		if(a==b==c)
		{
			printf("JACKPOT!");
		}
	    else
	    {
	        printf("아쉽습니다. 다음 기회에~~~");
	        
		}
		Sleep(1000);
	}
		
}

int home(int start)
{
	printf("[Slot Machine Game]\n");
	printf("1.게임시작//2.나가기>> ");
	scanf("%d",&start);
	if(start==2)
	{
		printf("다음 방문을 기다리겠습니다.");
		return 0;
	}
	else
	{
		system("cls");
		printf("<SLOT MACHINE>");
	}
}
