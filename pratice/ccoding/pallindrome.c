#include<stdio.h>
int main()
{
	int n,s=0,c,r;
	printf("enter a number");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s)
		printf("pallindrome");
	else
		printf("not pallindrome");
}
