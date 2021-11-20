#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void gotoxy(int x,int y);
int home();
int menu();

int main(){
    home();
}

int menu(){
    char menu[50];
    scanf("%s",&menu);
    int compare1 = strcmp(menu,"start");
    int compare2 = strcmp(menu,"rank");
    int compare3 = strcmp(menu,"manual");
    int compare4 = strcmp(menu,"option");
    int compare5 = strcmp(menu,"q");
    if(compare1==0){//start
    }
    else if(compare2==0){//rank
    }
    else if(compare3==0){//manual
    }
    else if(compare4==0){//option
    }
    else if(compare5==0){//quit
        return 0;
    }
    else{
    home();
    }
}
int home(){
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

void gotoxy(int x,int y){
COORD pos={x,y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}