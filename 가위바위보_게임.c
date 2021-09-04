#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
        int mine=0;
        char mine_c[50];
        int computer=0;
        int  tie,win,lose=0;

        while(1)
        {
        printf("----------가위 바위 보_게임----------\n");

        printf("MY: ");
        scanf("%s",&mine_c);
        if(mine_c=="가위")
        {
            mine=1;
        }
        if(mine_c=="바위")
        {
            mine=2;
        }
        if(mine_c=="보")
        {
            mine=3;
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
                printf("Computer: 가위");
                break;
            case 1:
                printf("Computer: 바위");
                break;
            case 2:
                printf("Computer: 보");
                break;
        }
        
        system("cls"); //reset screen
    }
}