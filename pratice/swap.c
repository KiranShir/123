#include<stdio.h>
int main()
{
	int x,y;
	printf("enter a first number");
	scanf("%d",&x);
	printf("enter a second number");
	printf("%d",&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swap%d%d\n",x,y);
}
