#include<stdio.h>
int main()
{
	int n,rev=0;
	printf("enter a number");
	scanf("%x",&n);
	while(n>0)
	{
		rev=rev<<1;
		if(n&1)
		{
			rev=rev^1;
		}
			n=n>>1;
		
		}
	printf("%x",rev);

}
