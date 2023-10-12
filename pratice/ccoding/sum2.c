#include<stdio.h>
int main()
{
	int n1,n2,sum=0;
	printf("enter two number");
	scanf("%d%d",&n1,&n2);
	while(n1<=n2)
	{
		sum=sum+n1;
		n1=n1+1;
	}
	printf("%d",sum);
}
