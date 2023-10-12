#include<stdio.h>
int main()
{
int n,pos;
printf("enter a number");
	scanf("%d",&n);
printf("enter the pos");
scanf("%d",&pos);
if(n&(1<<pos))
	printf("kth bit is set");
else
	printf("kth bit is not set");
}
