#include<stdio.h>
int main()
{
	int x,y,pos;
	printf("enter a number");
	scanf("%d",&x);
	printf("enter the pos");
	scanf("%d",&y);
	pos=(1<<y)|x;
	printf("%d",pos);
}

