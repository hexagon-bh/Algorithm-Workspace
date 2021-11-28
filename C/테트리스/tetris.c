#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
//basic_board
 int board[21][12] = {
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,1}
};
int block[7][4][4][4] = {
	{ // T모양 블럭
		{
			{0,0,0,0},
			{0,1,0,0},
			{1,1,1,0},
			{0,0,0,0}
		},
		{
			{0,0,0,0},
			{0,1,0,0},
			{0,1,1,0},
			{0,1,0,0}
		},
		{
			{0,0,0,0},
			{0,0,0,0},
			{1,1,1,0},
			{0,1,0,0}
		},
		{
			{0,0,0,0},
			{0,1,0,0},
			{1,1,0,0},
			{0,1,0,0}
		}
	},
	{    // 번개 블럭
		{
			{0,0,0,0},
			{0,1,1,0},
			{1,1,0,0},
			{0,0,0,0}
		},
		{
			{0,0,0,0},
			{1,0,0,0},
			{1,1,0,0},
			{0,1,0,0}
		},
		{
			{0,0,0,0},
			{0,1,1,0},
			{1,1,0,0},
			{0,0,0,0}
		},
		{
			{0,0,0,0},
			{1,0,0,0},
			{1,1,0,0},
			{0,1,0,0}
		}
	},
	{   // 번개 블럭 반대
		{   
			{0,0,0,0},
			{1,1,0,0},
			{0,1,1,0},
			{0,0,0,0}
		},
		{
			{0,0,0,0},
			{0,1,0,0},
			{1,1,0,0},
			{1,0,0,0}
		},
		{
			{0,0,0,0},
			{1,1,0,0},
			{0,1,1,0},
			{0,0,0,0}
		},
		{
			{0,0,0,0},
			{0,1,0,0},
			{1,1,0,0},
			{1,0,0,0}
		}
	},
	{   // 1자형 블럭
		{
			{0,1,0,0},
			{0,1,0,0},
			{0,1,0,0},
			{0,1,0,0}
		},
		{
			{0,0,0,0},
			{0,0,0,0},
			{1,1,1,1},
			{0,0,0,0}
		},
		{
			{0,1,0,0},
			{0,1,0,0},
			{0,1,0,0},
			{0,1,0,0}
		},
		{
			{0,0,0,0},
			{0,0,0,0},
			{1,1,1,1},
			{0,0,0,0}
		}
	},
	{   // L자형 블럭
		{
			{0,0,0,0},
			{1,0,0,0},
			{1,1,1,0},
			{0,0,0,0}
		},
		{
			{0,0,0,0},
			{1,1,0,0},
			{1,0,0,0},
			{1,0,0,0}
		},
		{
			{0,0,0,0},
			{1,1,1,0},
			{0,0,1,0},
			{0,0,0,0}
		},
		{
			{0,1,0,0},
			{0,1,0,0},
			{1,1,0,0},
			{0,0,0,0}
		}
	},
	{   // L자형 블럭 반대
		{
			{0,0,0,0},
			{0,0,1,0},
			{1,1,1,0},
			{0,0,0,0}
		},
		{
			{1,0,0,0},
			{1,0,0,0},
			{1,1,0,0},
			{0,0,0,0}
		},
		{
			{0,0,0,0},
			{1,1,1,0},
			{1,0,0,0},
			{0,0,0,0}
		},
		{
			{0,0,0,0},
			{1,1,0,0},
			{0,1,0,0},
			{0,1,0,0}
		}
	},
	{   // 네모 블럭
		{
			{0,0,0,0},
			{0,1,1,0},
			{0,1,1,0},
			{0,0,0,0}
		},
		{
			{0,0,0,0},
			{0,1,1,0},
			{0,1,1,0},
			{0,0,0,0}
		},
		{
			{0,0,0,0},
			{0,1,1,0},
			{0,1,1,0},
			{0,0,0,0}
		},
		{
			{0,0,0,0},
			{0,1,1,0},
			{0,1,1,0},
			{0,0,0,0}
		}
	}
};
//함수정의
void gotoxy(int x,int y);
int draw_map();
int home();
int menu();
//main함수
int main(){
    home();
}
//gotoxy함수
void gotoxy(int x,int y){
COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
//draw_map
int draw_map(){
 system("cls");
    printf("<TETRIS>\n");
    gotoxy(5,10);
    for(int j=0;j<=20;j++){
        for(int i=0;i<=11;i++){
            if(board[j][i]==1){
                printf(" ▦");
            }
            else{
				if(j!=3){
                printf("  ");
				} else{
					printf("--");
				}
            }
        }
        gotoxy(5,j+3);
    }
	gotoxy(27,5);
	printf("-");
	//미리보기 미니맵
	gotoxy(33,3);
	printf("+-  N E X T  -+ ");
	gotoxy(33,4);
	printf("|             | ");
	gotoxy(33,5);
	printf("|             | ");
	gotoxy(33,6);
	printf("|             | ");
	gotoxy(33,7);
	printf("|             | ");
	gotoxy(33,8);
	printf("+-- -  -  - --+ ");
	gotoxy(33,10);
	printf("LEVEL: ");
	gotoxy(33,11);
	printf("GOAL: ");
	gotoxy(33,13);
	printf("YOUR SCORE: ");
	gotoxy(33,14);
	printf("LAST SCORE: ");
	gotoxy(33,15);
	printf("BEST SCORE: ");
    //방향키 설명
    gotoxy(33,17);
    printf("  ▲   : UP");
    gotoxy(33,18);
    printf("◀   ▶ : Left/Right");
    gotoxy(33,19);
    printf("  ▼   : DOWN");
    gotoxy(33,20);
    printf("  P   : PAUSE");
    gotoxy(33,21);
    printf("  Q   : QUIT");
	//command
	gotoxy(6,24);
	printf(">>");
	//전체 보기
	gotoxy(5,25);
}
//menu
int menu(){
    char menu[50];
    scanf("%s",&menu);
    int compare1 = strcmp(menu,"start");
    int compare2 = strcmp(menu,"rank");
    int compare3 = strcmp(menu,"manual");
    int compare4 = strcmp(menu,"option");
    int compare5 = strcmp(menu,"q");
    if(compare1==0){//start
        draw_map();
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
//home
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
    printf("  P   : PAUSE");
    gotoxy(5,14);
    printf("  Q   : QUIT");
    //command
    gotoxy(5,16);
    printf(">>");
    menu();
}