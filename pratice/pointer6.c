#include<stdio.h>
#include<stdlib.h>
int main()
{
	int  *a,i,n,c=0;
	printf("enter array size");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter %d element",n);
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	for(i=0;i<n;i++)
	{
		if(*(a+i)%10==0)
			c++;
	}
	printf("multiple of 10 element %d",c);
}

