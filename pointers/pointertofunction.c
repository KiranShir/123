#include<stdio.h>
void function1();
int  main()
{
	void(*p)();
//	int *p;
	p = function1();
	(*p)();
}
void function1()
{
	printf("pointer to function");
}

