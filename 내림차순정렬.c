#include <stdio.h>
int main()
{
int x[9]={3,6,2,1,9,7,5,4,8};
int i=0;
int j=0;
int y=0;
for(j=0;j<=8;j++){
    for(i=0;i<=9;i++){
       if(x[i]<x[i+1]){
          y=x[i];
          x[i]=x[i+1];
          x[i+1]=y;
       }
    }
}
	for(j=0;j<=8;j++){
	printf("%d",x[j]);
}    
}
