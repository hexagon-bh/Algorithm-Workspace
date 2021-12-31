#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
void gotoxy(int x,int y){
COORD pos={x,y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int draw_map();
int main(){
	draw_map();
}
int draw_map(){
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
    printf("  P   : DOWN");
    gotoxy(33,21);
    printf("  Q   : QUIT");
	//command
	gotoxy(6,24);
	printf(">>");
	//전체 보기
	gotoxy(5,25);
}