#include <stdio.h>
int main()
{
	//Value 변수
	int value;
	//값 변수
	int Value[8]={0,0,0,0,0,0,0,0}; 

		//보조 변수
		int bit;
		int Assistant_Arr = 0;
		//Bin 배열
		int Bin[8] = { 0,0,0,0,0,0,0,0 };
		//보조 8비트 배열
		int Assistant[8] = { 0,0,0,0,0,0,0,0 };
		//Value 1 입력
		printf("Value: ");
		scanf("%d", &value);
		//이진수 변수
		int remainder;
		int quotient;
		quotient = value;
		//이진수 항목 출력
		printf("Bin: ");
		//이진수 출력
		while (quotient > 0)
		{
			remainder = quotient % 2;
			quotient = quotient / 2;
			//이진수---->Assistant배열
			Assistant[Assistant_Arr] = remainder;
			Assistant_Arr++;
	
			//value의 크기(단위 bit)
			if (quotient >= 1)
			{
				bit++;
			}
		}
		
		//Assistant----->Bin
		int Assistant_Bit;
		Assistant_Bit = bit;
		bit = bit + 1;
		bit = 8 - bit;
		while (bit <= 8)
		{
			Bin[bit] = Assistant[Assistant_Bit];
			Assistant_Bit--;
			bit++;
		}
	
		//이진수 출력
		for (int a = 0; a <= 7; a++)
		{
			printf("%d", Bin[a]);
			
			//4bit씩 띄어쓰기
			if(a==3)
			{
				printf(" ");
			}
		}
		//1의 보수
		printf("\n");
		 for(int b=0;b<=7;b++)
		 {
		 	if(Bin[b]==0)
		 	{
		 		Bin[b]=1;
			}
			else
			{
				Bin[b]=0;
			}
		 }
		 printf("1의 보수: ");
		 for(int c=0;c<=7;c++)
		 {
		 	printf("%d",Bin[c]);
		 	if(c==3)
		 	{
		 		printf(" ");
			}
		 }
		//2의보수 
	  		//Bin[7]이 0일때 
		if(Bin[7]==0)
		{
			Bin[7]=1;
			printf("\n2의 보수: ");
			for(int d=0;d<=7;d++)
			{
				printf("%d",Bin[d]);
				if(d==3)
				{
					printf(" ");
				}
			}
		}
		else
		{
			//Bin[7]이 1일때
			if(Bin[7]==1)
			{
				printf("\n");
				Bin[7]=0;
				int next=6;
				while(Bin[next]==1)
				{
					Bin[next]=0;
					next--;
				}
				if(Bin[next]==0)
				{
					Bin[next]=1; 
				}	
				printf("2의 보수: ");
				for(int e=0;e<=7;e++)
				{
					printf("%d",Bin[e]);
					if(e==3)
					{
						printf(" ");
					}
				}	
			}
		}
	
	return 0;
}
