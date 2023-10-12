#include<stdio.h>
int main()
{
	int x,y,pos;
	printf("enter a first number");
	scanf("%d",&x);
	printf("enter a second number");
	scanf("%d",&y);
	pos=x^(1<<y);
	printf("%d",pos);
}
