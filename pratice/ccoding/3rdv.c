#include<stdio.h>
int main()
{
	int a=10,b=20;
//	printf("enter the number");
//	scanf("%d%d",&a,&b);
	printf("before swapping %d%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping %d%d",a,b);
}
