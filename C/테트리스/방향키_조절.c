#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
void gotoxy(int x,int y);
int main(){
int x=1,y=1;
gotoxy(x,y);
while(1){
if(GetAsyncKeyState(VK_SPACE)){
y--;
Sleep(0.3);
}
if(GetAsyncKeyState(VK_DOWN)){
y++;
Sleep(0.3);
}
if(GetAsyncKeyState(VK_LEFT)){
x--;
Sleep(0.3);
}
if(GetAsyncKeyState(VK_RIGHT)){
x++;
Sleep(0.3);
}
system("cls");
gotoxy(x,y);
printf("*");
Sleep(1);
}
}

void gotoxy(int x,int y){
COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}