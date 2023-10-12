#include<stdio.h>
int main()
{
	int a,b,ch;
	int add,mul,div,sub;
	printf("enter a choice");
	scanf("%d",&ch);

	printf("enter two number");
	scanf("%d%d",&a,&b);
	if(ch==1)
	{
		add=a+b;
		printf("%d",add);
	}
	else if(ch==2)
	{
		sub=a-b;
		printf("%d",sub);
	}
	else if(ch==3)
	{
		mul=a*b;
		printf("%d",mul);
	}
	else if(ch==4)
	{
		div=a/b;
		printf("%d",div);
	}
	else
	{
		printf("invalid choice");
	}
}

