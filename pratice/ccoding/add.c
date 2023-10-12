#include<stdio.h>
int main()
{
	int num1,num2,i;
	printf("enter the first number");
	scanf("%d",&num1);
	printf("enter the second number");
	scanf("%d",&num2);
	for(i=1;i<=num2;i++)
		num1++;
	printf("%d",num1);
}
