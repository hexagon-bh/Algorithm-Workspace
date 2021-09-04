#include <stdio.h>
int main()
{
    int mine=0;
    char mine_c[50];
    int computer=0;

    printf("----------가위 바위 보_게임----------\n");
    printf("MY: ");
    scanf("%s",&mine_c);
    if(mine>2)
    {
        return 0;
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

}