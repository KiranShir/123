#include<stdio.h>
int main()
{
	int var;
	int x;
	int *p=&var;
	*p=10;
	scanf("%d",p);
	scanf("%d",&var);
	(*p)++;
	x=*p+10;
	printf("%d",*p);
	printf("%d",var);
}
