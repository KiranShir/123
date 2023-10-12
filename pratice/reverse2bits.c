#include<stdio.h>
int main()
{
	int  n=0,num=0,p=0,q=0;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter position 1:");
	scanf("%d",&p);
	printf("enter position 2");
	scanf("%d",&q);
	num=n;
	if(((n&(1<<p))>>p)^((n&(1<<q))>>q))
	{
		n^=(1<<p);
		n^=(1<<q);
	}
	printf("swapping bits\n%d",n);
	return 0;
}
