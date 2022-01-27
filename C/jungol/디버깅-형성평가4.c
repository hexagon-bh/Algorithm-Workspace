#include <stdio.h>
#include <time.h>
int main()
{
	int a,b,c=0;
	time_t now;
	struct tm tt;
	time(&now);
	tt = *localtime(&now);
	a = tt.tm_year;
	b += tt.tm_mon;
	c += tt.tm_mday;
	printf("%d %d %d\n",a,b,c);
	return 0;
}
