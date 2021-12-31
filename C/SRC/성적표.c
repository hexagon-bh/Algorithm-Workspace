#include <stdio.h>
int main()
{
   float subject[5]={0,}; //1=math,2=english,3=korean,4=science,5=history
   float total,max=0;
   float average=0;

    //입력
    printf("수학 점수: ");
    scanf("%f",&subject[0]);
    printf("영어 점수: ");
    scanf("%f",&subject[1]);
    printf("국어 점수: ");
    scanf("%f",&subject[2]);
    printf("과학 점수: ");
    scanf("%f",&subject[3]);
    printf("역사 점수: ");
    scanf("%f",&subject[4]);
    
    //총점
    total=subject[0]+subject[1]+subject[2]+subject[3]+subject[4];
    printf("%.0f\n",total);
    
    //최대점
   for(int i=0;i<=4;i++)
   {
       if(max<subject[i])
       {
           max=subject[i];
       }
   }
    printf("%.0f\n",max);

   //평균
   average=total/5;
   printf("%.2f\n",average);
}
