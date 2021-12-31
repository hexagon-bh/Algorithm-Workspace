#include<stdio.h>
int main()
{
    int a[5][5] = { 0, };
    int b = 0;
    int turn = 0;
    int turnx=0, turny=0;
    int x=0, y = 0;
    int t=0, p = 0;
    int max = 0;
    for (turn = 0; turn <= 8; turn++)
    {
        int d, e, f, q = 0;
        if (turn == 0)
        {
            max = 4;
        }
        if (turn == 3)
        {
            max = 3;
        }
        if (turn == 6)
        {
            max = 2;
        }
        if (turn == 7)
        {
            max = 1;
        }
        if (turn == 8)
        {
            max = 2;
        }
        if (turn % 2 == 0)
        {
            if (turnx % 2 == 0)
            {
                for (d = t; d <= max; d++)
                {
                    b++;
                    a[y][d] = b;
                }
                x = max;
                t = max;
                turnx++;
            }
            else
            {
                for (f = t; f >= x - max; f--)
                {
                    b++;
                    a[y][f] = b;
                }
                t = x - max;
                x = t;
                turnx++;
            }
        }
        else
        {
            if (turny % 2 == 0)
            {
                for (e = p; e <= max; e++)
                {

                    b++;
                    a[e][x] = b;
                }
                y = max;
                p = max;

                turny++;
            }
            else
            {
                for (q = p; q >= y - max; q--)
                {
                    b++;
                    a[q][x] = b;
                }
                p = y - max;
                y = p;
                turny++;
            }
        }
        b--;
    }
    for (int j = 0; j <= 4; j++)
    {
        for (int i = 0; i <= 4; i++)
        {
            printf("%3d", a[j][i]);
        }
        printf("\n");
    }
}
