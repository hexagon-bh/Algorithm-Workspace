#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
   int select;
   int coin;
   int numbers[3];
   int i;
   
   srand(time(NULL));      //매번 다른 시드값 생성 
   
   while (1){
      printf("\n[Slot Machine Game]\n");
      printf("1.게임시작 // 2. 나가기>> ");
      scanf("%d", &select);
      
      if (select==1){
         while (1){
            printf("\n<SLOT MACHINE>\n");
            printf("코인을 넣어주세요!(1.코인넣기//2.그만하기)>>");
            scanf("%d", &coin);
            
            if (coin==1){
               // 랜덤 숫자 발생 
               for(i=0; i<3; i++) {numbers[i] = (rand()%7) + 33;}
               // 화면 출력 
               printf("----------------\n");
               printf("| %c | %c | %c |\n", numbers[0], numbers[1], numbers[2]);
               printf("----------------\n");
               // 결과 출력
               if (numbers[0]==numbers[1] && numbers[1]==numbers[2]){
                  printf("JACKPOT!!!!!\n");
               } else{
                  printf("아쉽습니다. 다음 기회에!\n");
               }
            }else if(coin==2){
               printf("메인화면으로 이동합니다.\n\n");
               break;
            }else{
               printf("잘못 입력하셨습니다.\n");
            }
         }
      } else if(select==2){
         printf("다음 방문을 기다리겠습니다. 안녕히가세요.\n");
         break;
      } else{
         printf("잘못 입력하셨습니다.\n");
      }   
   }
}