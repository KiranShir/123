#include<stdio.h>
void natural(int n)
{

	if(n<=10)
{
	printf("%d",n);
	natural(n+1);
}
}
void main()
{
	int n=1;
	natural(n);
}
