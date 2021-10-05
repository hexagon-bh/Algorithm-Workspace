#include<stdio.h>
int main()
{
    int a[5][5]={0,};
    int number=0;
    int plus=0;
    int minus=4;
    int x,y=0;

    for(y=0;y<=4;y++) //y좌표
    {        
		for(x=plus;x<=minus;x++)
        {
            number++;
            a[y][x]=number;
        }
        
        //plus,minus 결정
        if(y<=1)
        {
            plus++;
            minus--;
        }
        if(y>=2)
        {
			plus--;
			minus++;
		}
    }

    //출력
    for(int n=0;n<=4;n++)
    {
        for(int m=0;m<=4;m++)
        {
			printf("%3d",a[n][m]);
        }
		printf("\n");
    }
}
