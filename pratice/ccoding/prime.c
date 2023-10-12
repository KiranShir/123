#include<stdio.h>
int main()
{
	int n,count=0,i;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				count++;
			}
		}
	}
	if(count==2)
		printf("prime number");
	else
		printf("not prime");
}
