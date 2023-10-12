#include<stdio.h>
void sum()
{
	int a,b,sum;
	printf("enter a number");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("%d",sum);
}
void main()
{
	sum();
	printf("hello");
	sum();
}
