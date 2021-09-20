#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//함수 지정
int print(int sdoku[9][9]);

int main()  //main
{
    //변수
    int sdoku[9][9]={0,};
    //TITLE
    printf("<SDOKU SOLVER>\n\n");
    //문제 입력
    printf("문제를 입력하세요>> \n");
    for (int l = 0; l <= 8; l++)
    {
        scanf("%d %d %d %d %d %d %d %d %d", &sdoku[0][l], &sdoku[1][l], &sdoku[2][l], &sdoku[3][l], &sdoku[4][l], &sdoku[5][l], &sdoku[6][l], &sdoku[7][l], &sdoku[8][l]);
    }


    return 0;
}

int candidate(int sdoku[9][9],int x,int y)
{
    int candidate[9]={0,};
    
}

int print(int sdoku[9][9])  //스도쿠  출력 함수
{
    for(int z=0;z<=8;z++) //행
    {
        for(int d=0;d<=8;d++) //열
        {
            printf("%3d",sdoku[d][z]);
            if(d==2 | d==5)
            {
                printf(" ");
            }
        }
        printf("\n");
        if(z==2 | z==5)
        {
            printf("\n");
        }
    }
}