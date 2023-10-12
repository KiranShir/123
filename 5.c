#include<stdio.h>
int main()
{
	int x,y,i;
	printf("enter a number");
	scanf("%d",&x);
	printf("enter the pos");
	scanf("%d",&y);
	if((x>>1)&1)
	
		printf("set");
	else
		printf("reset");
	
	for(i=31;i>=0;i--)
		printf("%d",(x>>i)&1);
}
