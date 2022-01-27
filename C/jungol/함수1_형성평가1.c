#include<stdio.h>
int sub();
int main()
{
    printf("first\n");
    sub();
    printf("second\n");
    sub();
    printf("third\n");
    sub();

}
int sub()
{
    printf("@@@@@@@@@");
}