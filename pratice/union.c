#include<stdio.h>
union abc
{
	int a;
	int  b;
}var;
int main()
{
	var.a=12;

printf("a=%d",var.a);
printf("b=%d",var.b);
return 0;
}
