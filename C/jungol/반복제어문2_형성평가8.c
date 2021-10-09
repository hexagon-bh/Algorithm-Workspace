#include <stdio.h>
int main()
{
    int row,column=0; //행과 열
    int number=0;
    printf("ROW: ");
    scanf("%d",&row);
    printf("COLUMN: ");
    scanf("%d",&column);
    for(int i=0;i<=column-1;i++)
    {
        for(int j=0;j<=row-1;j++)
        {
            number++;
            printf("%3d",number);
        }
        printf("\n");
    }

}