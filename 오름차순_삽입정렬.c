#include <stdio.h>
int main(){
    int a[6]={5,4,2,8,6,9};
    int t;
    
    for(int i=0;i<6;i++){
        int j=i;
        while((a[j] < a[j-1])&&(j>=0)){
            t=a[j];
            a[j]=a[j-1];
            a[j-1]=t;
            j--;
        }
    }
    for(int c=0;c<=5;c++){
        printf("%3d",a[c]);
    }
    
    return 0;
}
