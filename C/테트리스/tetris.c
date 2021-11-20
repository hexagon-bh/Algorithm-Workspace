#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//함수정의
void gotoxy(int x,int y);
//main함수
int main()
{

}
//gotoxy함수
void gotoxy(int x,int y){
COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}