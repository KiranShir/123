#include<stdio.h>
int main()
{
	int x,y,pos;
	printf("enter the no");
	scanf("%d",&x);
	printf("enter the pos");
	scanf("%d",&y);
	pos=x^(1<<y);
	printf("%d",pos);
}
