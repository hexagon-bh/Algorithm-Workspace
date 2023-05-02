#include <stdio.h>
int main(){
	int n=0,blank=0;
	scanf("%d",&n);
	blank=n-1;
	for(int j=1;j<=n;j++){
		for(int i=blank;i>=1;i--){
			printf(" ");
		}
		for(int i=0;i<=j*2-2;i++){
			printf("*");
		}
		printf("\n");s
		blank-=1;
	}
	return 0;
}