#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//함수 지정
int print(int sdoku[9][9]);

int main()  //main
{
    //변수
    int sdoku[9][9]={0,};
    int candidate_number[9][9]={0,};
    int CN=0;
    int ok=0;
    int row[9]={0,};
    int column[9]={0,};
    int small_box[9]={0,};
    int X,Y=0;
    int temp=0;
    int number=0;
    //candidate_number 번호 지정
    for(int num1=0;num1<=8;num1++)
    {
        for(int num2=0;num2<=8;num2++)
        {
            candidate_number[num2][num1]=CN;
            CN++;
        }
    }
    //TITLE
    printf("<SDOKU SOLVER>\n\n");
    //문제 입력
    printf("문제를 입력하세요>> \n");
    for (int l = 0; l <= 8; l++)
    {
        scanf("%d %d %d %d %d %d %d %d %d", &sdoku[0][l], &sdoku[1][l], &sdoku[2][l], &sdoku[3][l], &sdoku[4][l], &sdoku[5][l], &sdoku[6][l], &sdoku[7][l], &sdoku[8][l]);
    }
    system("cls");
    //문제 출력
    printf("<SDOKU SOLVER>\n\n");
    printf("문제>>\n");
    print(sdoku);
    
    while(ok==0)
    {
        int candidate[9][81]={0,};
        int blank_number=0;
        for(int j=0;j<=8;j++)
        {
            for(int i=0;i<=8;i++)
            {
                if(sdoku[i][j]==0)
                {
                    //row&column
                    for(int A=0;A<=8;A++)
                    {
                    row[A]=sdoku[A][j];
                    column[A]=sdoku[i][A];
                    }
                    //small_box의 X,Y값
                    if(i<=2)
                    {
                        Y=0;
                    }
                    if(i>=3 && i<=5)
                    {
                        Y=3;
                    }
                    if(i>=6 && i<=8)
                    {
                        Y=6;
                    }
                    if(j<=2)
                    {
                        X=0;
                    }
                    if(j>=3 && j<=5)
                    {
                        X=3;
                    }
                    if(j>=6 && j<=8)
                    {
                        X=6;
                    }
                    //Small_box
                    int num=0;
                    for(int n=X;n<=X+2;n++)
                    {
                        for(int m=Y;m<=Y+2;m++)
                        {
                            small_box[num]=sdoku[m][n];
                            num++;
                        }
                    }
                    //candidate
                    int count=0;
                    for(number=1;number<=9;number++)
                    {
                        int same=0;
                        for(int range=0;range<=8;range++)
                        {
                            if(row[range]==number)
                            {
                                same++;
                            }
                            if(column[range]==number)
                            {
                                same++;
                            }
                            if(small_box[range]==number)
                            {
                                same++;
                            }
                        }
                        if(same==0)
                        {
                            candidate[count][blank_number]=number;
                            count++;
                        }
                    }
                }
                //blank_number
                blank_number++;
            }
        }
    //후보 확정&확정된 수 입력 
        for(int u=0;u<=81;u++)//blank_number
        {
            int zero=0;
            for(int u2=0;u2<=8;u2++)
            {
                if(candidate[u2][u]==0)
                {
                    zero++;
                }
            }
            if(zero==8)
            {
                for(int u3=0;u3<=8;u3++)
                {
                    if(candidate[u3][u]>0)
                    {
                        temp=candidate[u3][u];
                        for(int l1=0;l1<=8;l1++)
                        {
                            for(int l2=0;l2<=8;l2++)
                            {
                                if(candidate_number[l2][l1]==u)
                                {
                                    sdoku[l2][l1]=temp;
                                }
                            }
                        }

                    }
                }
            }
        }
        //확인
        int empty=0;
        for(int h1=0;h1<=80;h1++)
        {
            for(int h2=0;h2<=8;h2++)
            {
                if(candidate[h2][h1]!=0)
                {
                    empty++;
                }
            }
        }
        if(empty==0)
        {
            ok=1;
        }
    }
    //정답 출력
    printf("정답>> \n\n");
    print(sdoku);
    return 0;
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