#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the 1st number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	printf("enter the 3rd number");
	scanf("%d",&c);
if(a>=b && a>=c)
	printf("a is graest");
if(b>=a && b>=c)
	printf("b is greatest");
if(c>=a && c>=b)
	printf("c is greastes");
}
