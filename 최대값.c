#include <stdio.h>
int main() 
{
	int x[10]={3,6,2,1,0,9,7,5,4,8};
	int max =0;
	int y=0;
	for(int i=0;i<10;i++){
	if(x[i]>max){
	 max=x[i];
	 y=i+1;
	}	
	}
	printf("%d",max);	
	printf("%d",y);
}
