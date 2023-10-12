#include<stdio.h>
int main()
{
	int x=5;
	int *p;
	p=&x;
	printf("%d\n",p);
	printf("%d\n",*p);
	p=p+1;
	printf("%d\n",p);
	printf("%d\n",*p);
}
