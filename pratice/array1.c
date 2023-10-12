#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter %d element",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
