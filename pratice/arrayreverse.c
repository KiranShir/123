#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf("enter the array size");
	scanf("%d",&n);
	printf("arry %d element",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("array reverse");
	for(i=n-1;i>=0;i--)
		printf("%d",a[i]);
}
