#include<stdio.h>
int main()
{
	int a[5],n,i;
	printf("enter no of element");
	scanf("%d\n",&n);
	printf("enter the  elements");
	for(i=0;i<n;i++)
	
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}
