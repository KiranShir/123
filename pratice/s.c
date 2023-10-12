#include<stdio.h>
void main()
{
	int n,i,k;
	printf("enter the num\n");
	scanf("%x",&n);
	for(i=0; i<=7; i++)
	{
		k=((n>>i)&0x01);
		printf("%x",k);
	}
}
