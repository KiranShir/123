#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n&(1<<3)==0)
		printf("set");
	else
		printf("reset");
}
