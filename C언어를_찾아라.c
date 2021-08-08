#include <stdio.h>
/*
문제 설명
길이가 100 이하인 문자열로 구성된 암호문을 발견하였다. 이 암호문은 예전에 작성된 것으로 판단된다.
이 문자열에서 “C”라는 문자와 “CC”라는 문자가 몇 개 있는지 조사하고자 한다.
길이가 100 이하인 문자열을 입력받아,
"C"라는 문자와 "CC"라는 문자가 각각 몇 개 존재하는지 알아내는 프로그램을 작성하시오.
(단, C, CC는 대소문자를 구분하지 않는다. 즉, "cC"는 "CC"와 같다.)

입력
① 첫 번째 줄에 길이가 100 이하인 문자열이 입력된다. 문자는 모두 대문자 또는 소문자로 이루어진다.
② 대소문자의 구분이 없으므로 “C”는 2가지 경우, “CC”는 모두 서로 다른 4가지경우가 각각 존재할 수 있다.

출력
① 첫 번째 줄에는 문자열에서 찾은 “C”의 개수를 출력한다.
② 두 번째 줄에는 문자열에서 찾은 “CC”의 개수를 출력한다.

입력 예시   
cCCc

출력 예시
4
3

도움말
“C”는 4개, “CC”는 “cC”, “CC”, “Cc”와 같이 3개가 존재하므로 4, 3을 출력한다.


*/

int main()
{
    int C_Count=0;
    int CC_Count=0;
    char value[100];

    printf("-----------C언어를 찾아라-----------\n");
    printf("문자열을 입력하시오\n(대소문자 상관없음!!! / 100자 이내)\n:");
    scanf("%s",&value);

    while(value[C_Count]!=0)
    C_Count++;
    
    for(int i=0;i<=C_Count;i++)
    {
        if(value[i]!='c')
        C_Count--;
    }

    printf("%d",C_Count);

}
//gcc C언어를_찾아라.c
//./a.exe