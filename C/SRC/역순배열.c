#include <stdio.h>
int main()
{
    int x=6;
    int line=1;
    int t=0;
    int d;
    
	for(int j=0;j<=4;j++){
	t =5*j;
	d=j*5;
	x=6+d;		
	for(int i=0;i<=4;i++){
		if(line%2==0){
		x--;
		printf("%3d",x);	
		}
		else
		{
		t++;
		printf("%3d",t);	
		}
		
		

	}
	
	printf("\n");
	line++;
	}
	}
