#include<stdio.h>
int main()
{
	int n,y,pos;
	printf("enter a number");
	scanf("%d",&n);
	printf("enter a pos");
	scanf("%d",&y);
	pos=n&~(1<<pos);
	printf("%d",pos);
}
	
