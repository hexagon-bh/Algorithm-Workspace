#include <stdio.h>
int print(int sdoku[9][9]);
int main()
{
    int sdoku[9][9]={0,};
}

int print(int sdoku[9][9])
{
     printf("   ▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
    for (int j = 0; j <= 8; j++) //열
    {
        printf("   ▒ ");
        for (int i = 0; i <= 8; i++) //행
        {
            printf("%1d ", sdoku[i][j]);
            if (i == 2 | i == 5 | i == 8)
            {
                printf("▒ ");
            }
        }
        printf("\n");
        if (j == 2 | j == 5 | j == 8)
        {
            printf("   ▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
        }
    }
}