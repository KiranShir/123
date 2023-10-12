#include<stdio.h>
int main()
{
	int x,y,pos;
	printf("enter first number");
	scanf("%d",&x);
	printf("enter scnd number");
	scanf("%d",&y);
	pos=(1<<y)|x;
	printf("%d",pos);
}

