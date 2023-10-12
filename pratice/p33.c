#include<stdio.h>

int addition();
int main()
{
	int result;
	int (*ptr)();
	ptr=&addition;
	result=(*ptr)();
	printf("the sum is %d",result);
}
int addition()
{
	int a,b;
	printf("enter a  number");
	scanf("%d%d",&a,&b);
	return a+b;
}
