#include <stdio.h>
int main()
{
    int value = 0;
    printf("정수를 입력하시오!\n: ");
    scanf("%d",&value);
    for(int row=1;row<=value;row++)
    {
        for(int column=1;column<=value;column++)
        {
            printf("(%d, %d)   ",row,column);
        }
        printf("\n");
    }
}