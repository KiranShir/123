#include<stdio.h>
int main()
{
	int i=5;
	volatile int j=5;
	printf("%d%d%d",++i,++i,++i);
	printf("%d%d%d",++j,++j,++j);
}
