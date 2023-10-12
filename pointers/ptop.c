#include<stdio.h>
void main()
{
	int x=10;
	int *p;
	int **q;
	p=&x;
	q=&p;
	printf("add of of x=%u\n",p);
	printf("add of p=%u\n",q);
	printf("value of %d",*p);
	printf("value of %d",**q);
}
