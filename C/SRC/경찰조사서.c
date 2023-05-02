#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
int main(){
	char name[10],prime[50];
	int age=0;
	float heigh=0;
	double weight=0; 
	printf("이름: ");
	scanf("%s",&name);
	printf("나이: ");
	scanf("%d",&age);
	printf("신장: ");
	scanf("%f",&heigh);
	printf("체중: ");
	scanf("%lf",&weight);
	printf("죄명: ");
	scanf("%s",&prime);
	
	system("cls");
	printf("경찰조사서");
	printf("%s\n",name);
	printf("%d\n",age);
	printf("%f\n",heigh);
	printf("%lf\n",weight);
	printf("%s\n",prime);
	
	int a;
	scanf("%d",a);
	return 0;
}