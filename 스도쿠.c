#include<stdio.h>
//스도쿠 출력
int sub(int Big[9][9])
{
    for(int j=0;j<=8;j++)
    {
       if(j==0 || j==3 || j==6)
       {
        printf("*************************************");
        printf("\n");
       }
        for(int i=0;i<=8;i++)
        {
            if(i==0)
            {
                printf("*");
            }
            printf("%3d",Big[j][i]);
            if(i==2 || i==5)
            {
                printf("  *");
            }
        }
            printf("  *");
            printf("\n");
    }
    printf("*************************************");
}

int main()
{
    int Big[9][9]={0,};
    //a가 y좌표,b가 x좌표
    int a,b=0;
    int number=0;
    //값 입력
    int value;
   printf("몇개의 값을 입력하실겁니까?");
   scanf("%d",&number);
   if(number>81)
   {
       printf("error");
       return 0;
   }
   for(int v=0;v<=number-1;v++)
    {
        printf("좌표: ");
        scanf("%d,%d",&a,&b);
        if(a>8 || b>8)
        {
            printf("error");
            return 0;
        }
        printf("(%d,%d)의 값: ",a,b);
        scanf("%d",&value);
        if(value>9)
        {
            printf("error");
            return 0;
        }
       
        Big[a][b]=value;
     }
    //문제
    printf("-------------------------------");
    printf("\n");
    printf("[문제]");
    printf("\n");
    sub(Big);

    //답구하기
    int vertical[9]={0,};
    
    return 0;
}
