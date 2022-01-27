#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
        int mine=0;
        char mine_c[50];
        int computer=0;
        int  total=0,tie=0,win=0,lose=0;

        while(1)
        {
        printf("\n----------가위 바위 보_게임----------\n");

        printf("MY: ");
        scanf("%s",&mine_c);
        if(mine_c=="가위")
        {
            mine=0;
        }
        if(mine_c=="바위")
        {
            mine=1;
        }
        if(mine_c=="보")
        {
            mine=2;
        }
        if(mine>2)
        {
            system("cls");
            continue;
        }

        srand((unsigned) time(NULL));
        computer=rand()%3;
        switch(computer)
        {
            case 0:
                printf("Computer: 가위\n");
                break;
            case 1:
                printf("Computer: 바위\n");
                break;
            case 2:
                printf("Computer: 보\n");
                break;
        }

        //tie
        if(computer==mine)
        {
            printf("무승부\n");
            tie++;
        }
        
        //win
        if((mine==0 && computer==2)|| 
            (mine==1 && computer==2)||
            (mine==2 && computer==1)
          )
          {
              win++;
              printf("이겼습니다!\n");
          }
         
         //lose
          if((mine==0 && computer==1)||
             (mine==1 && computer==2)||
             (mine==2 && computer==0)
          )
          {
              lose++;
              printf("졌습니다!\n");
          }
         
          total++;

          printf("\n%d판 %d승 %d패 %d무\n",total,win,lose,tie);
        
        printf("Do you want to continue?[Yes:0 / No:1] ");
        int next=2;
        scanf("%d",&next);
        if(next==0)
        {
        	system("cls");
		}
		if(next==1)
		{
			return 0;
		}
    }
}