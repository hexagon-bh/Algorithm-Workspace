#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void gotoxy(int x,int y);
int home();
int menu();
int main()
{
    home();
}

int menu()
{
    char menu[50];
    scanf("%s",&menu);
    int compare1 = strcmp(menu,"start");
    int compare2 = strcmp(menu,"rank");
    int compare3 = strcmp(menu,"manual");
    int compare4 = strcmp(menu,"option");
    if(compare1 != 0 || compare2 != 0 || compare3 != 0 || compare4 != 0 )
    {
        system("cls");
        home();
    }
    if(compare1==0)//start
    {
        system("cls");
        printf("s");
    }
    if(compare2==0)//rank
    {
        system("cls");
        printf("r");
    }
    if(compare3==0)//manual
    {
        system("cls");
        printf("m");
    }
    if(compare4==0)//option
    {
        system("cls");
        printf("o");
    }
}
int home()
{
    //TITLE
    gotoxy(5,3);
    printf("□   ■ □ □ ○   ■ ■ □ □ ■ ■ □ □ □ ☆ ■");
    gotoxy(5,4);
    printf("□ □ ■ □ ■ □ ※ □ ■ □ ■ □ ■   □ ◎ ■ □");
    gotoxy(5,5);
    printf("■ ■   □   ★ T E T R I S ★ □ ■ ■   □");
    gotoxy(5,6);
    printf("□ ■ ■ ■ □ ■ □ ■   ■ ■ ■ □ □ ■ □ □ ■");
    gotoxy(5,7);
    printf("■   □ ◇ □ ■ ■ ■ □ ■   □ ■   ※ □ ■ □");

    //MENU
    gotoxy(25,10);
    printf("<<START>>");
        gotoxy(25,11);
    printf("<<RANK>>");
        gotoxy(25,12);
    printf("<<MANUAL>>");
        gotoxy(25,13);
    printf("<<OPTION>>");
    //방향키 설명
    gotoxy(5,10);
    printf("  ▲   : UP");
    gotoxy(5,11);
    printf("◀   ▶ : Left/Right");
    gotoxy(5,12);
    printf("  ▼   : DOWN");
    gotoxy(5,13);
    printf("  P   : DOWN");
    gotoxy(5,14);
    printf("  Q   : QUIT");

    //command
    gotoxy(5,16);
    printf(">>");
    menu();
}

void gotoxy(int x,int y)
{
COORD pos={x,y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}