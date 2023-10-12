#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,n,sum=0;
	printf("enter array size");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter array %d element",n);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=0;i<n;i++);
	 sum=sum +*(a+i);
	 printf("sum=%d",sum);
}

