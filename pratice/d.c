#include<stdio.h>
int main()
{
	int i,n,a[10];
	printf("enter number to be convert");
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	printf("binary no is given");
	for(i=-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
