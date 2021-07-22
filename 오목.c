#include<stdio.h>
//출 력 
int sub(int a[19][19])
{
   int number=0;
   int x[19],y[19]={0,};
   printf("    ");
   for(int n=0;n<=18;n++)
   {
       x[n]=number;
       printf("%3d",x[n]);
       number++;
   }
   printf("\n\n");
   number=0;
    for(int j=0;j<=18;j++)
    {
    	y[j]=number;
    	if(j<=9)
    	{
    		printf(" ");
		}
    	printf("%d  ",y[j]);
    	number++;
        for(int i=0;i<=18;i++)
        {
			printf("%3d",a[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    //변수 
	int a[19][19]={0,};
    int blank=0;
    int x,y=0;
    int color=0;
    
    //제목 
    printf("--------------------------------오목--------------------------------\n\n");

	//입력 
	printf("입력칸 수: ");
	scanf("%d",&blank);
	for(int j=1;j<=blank;j++)
    {
		printf("좌표: ");
		scanf("%d %d",&x,&y);
		printf("흰돌 OR 검은돌(흰돌:1,검은돌:2): ");
		scanf("%d",&color);
		a[y][x]=color;
	}
	sub(a);
}
