#include <stdio.h>
int print(int sdoku[9][9])
{
    printf("   ▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
    for(int j=0;j<=8;j++)//열
    {
        printf("   ▒ ");
        for(int i=0;i<=8;i++)//행
        {
            printf("%1d ",sdoku[i][j]);
            if(i==2 | i==5 | i==8)
            {
                printf("▒ ");
            }
        }
        printf("\n");
        if(j==2 | j==5 | j==8)
        {
            printf("   ▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
        }
    }
}

int main()
{
    int sdoku[9][9]={0,};
    int line[9]={0,};
    int row[9]={0,};
    int small_box[3][3]={0,};
    int candidate[81][9]={0,};
    int i,j=0;
    int start,end=0;

    for(j=0;j<=8;j++)
    {
        for(i=0;i<=8;i++)
        {
            if(sdoku[i][j]>0)
            {
                for(int a=0;a<=8;a++)
                {
                   line[a]=sdoku[a][j];
                   row[a]=sdoku[i][a];
                }
                if()

            }
        }
    }
    
    print(sdoku);
}