# include <stdio.h>
int main()
{
    int number[10]={0,};
    int odd,even=0;
    scanf("%d %d %d %d %d %d %d %d %d %d",&number[0],&number[1],&number[2],&number[3],&number[4],&number[5],&number[6],&number[7],&number[8],&number[9]);
    for(int i=0;i<=9;i++)
    {
        if(number[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("짝수: %d\n홀수: %d",even,odd);
}