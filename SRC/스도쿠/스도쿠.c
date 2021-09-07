//입력
/*0 2 3 0 0 0 0 0 0
  4 5 0 0 0 0 0 0 0
  0 0 9 0 0 0 0 3 0
  0 0 1 0 0 0 0 0 0
  0 0 0 1 0 0 0 0 0
  0 0 0 0 0 0 2 0 0
  0 0 0 0 0 0 0 4 0
  0 0 0 0 0 0 8 0 0
  0 0 0 0 7 0 0 0 0*/
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
    int small_box[9]={0,};
    int candidate[9][81]={0,};
    int i,j,count=0;
    int true=0;
    
    int x_start,x_end,y_start,y_end=0;

    printf("<스도쿠 문제 입력>\n");
    for(int l=0;l<=8;l++)
    {
    scanf("%d %d %d %d %d %d %d %d %d",&sdoku[0][l],&sdoku[1][l],&sdoku[2][l],&sdoku[3][l],&sdoku[4][l],&sdoku[5][l],&sdoku[6][l],&sdoku[7][l],&sdoku[8][l]);
	}

    print(sdoku);

    for(j=0;j<=8;j++)
    {
        for(i=0;i<=8;i++)
        {
            count++;
            if(sdoku[i][j]==0)
            {
                for(int a=0;a<=8;a++)
                {
                   line[a]=sdoku[a][j];
                   row[a]=sdoku[i][a];
                }

                //small box
                if(i>=0 && i<=2)
                {
                    if(j>=0 && j<=2)//small_box 1
                    {
                        x_start=0;
                        x_end=2;
                        y_start=0;
                        y_end=2;
                    }
                    if(j>=3 && j<=5)//small_box 4
                    {
                        x_start=0;
                        x_end=2;
                        y_start=3;
                        y_end=5;
                    }
                    if(j>=6 && j<=8)//small_box 7
                    {
                        x_start=0;
                        x_end=2;
                        y_start=6;
                        y_end=8;
                    }
                }
                if(i>=3 && i<=5)
                {
                    if(j>=0 && j<=2)//small_box 1
                    {
                        x_start=3;
                        x_end=5;
                        y_start=0;
                        y_end=2;
                    }
                    if(j>=3 && j<=5)//small_box 4
                    {
                        x_start=3;
                        x_end=5;
                        y_start=3;
                        y_end=5;
                    }
                    if(j>=6 && j<=8)//small_box 7
                    {
                        x_start=3;
                        x_end=5;
                        y_start=6;
                        y_end=8;
                    }
                }
                if(i>=6 && i<=8)
                {
                    if(j>=0 && j<=2)//small_box 1
                    {
                        x_start=6;
                        x_end=8;
                        y_start=0;
                        y_end=2;
                    }
                    if(j>=3 && j<=5)//small_box 4
                    {
                        x_start=6;
                        x_end=8;
                        y_start=3;
                        y_end=5;
                    }
                    if(j>=6 && j<=8)//small_box 7
                    {
                        x_start=6;
                        x_end=8;
                        y_start=6;
                        y_end=8;
                    }
                }

                //small_box
                int x=0;
                for(int d=y_start;d<=y_end;d++)
                {
                    for(int e=x_start;e<=x_end;e++)
                    {
                        small_box[x]=sdoku[e][d];
                        x++;
                    }
                }
                
                for(int f=0;f<=8;f++)
                {
                    candidate[f][count]=line[f];
                }
                int n=0;
                for(int g=0;g<=8;g++)
                {
                    true=0;
                    for(int j=0;j<=8;j++)
                    {
                       if(row[g]==candidate[j][count])
                       {
                           true++;
                       }
                    }
                    if(true==8)
                    {
                        candidate[n][count]=row[g];
                        n++;
                    }
                }
                n=0;
                for(int u=0;u<=8;u++)
                {
                    true=0;
                    for(int sd=0;sd<=8;sd++)
                    {
                       if(small_box[u]==candidate[sd][count])
                       {
                           true++;
                       }
                    }
                    if(true==8)
                    {
                        candidate[n][count]=small_box[u];
                        n++;
                    }
                }

            }
        }
    }

}