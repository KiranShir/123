#include<stdio.h>
int *function();
int  main()
{
	int *p;
	p=function();
	printf("\n%u",p);
	printf("\n%u",*p);
}
int *function()
{
	static int x=20;
	return(&x);
}

