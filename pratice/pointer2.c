#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,oc=0,ec=0;
	printf("enter array size");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter %d element",n);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=0;i<n;i++)
	{
		if(*(a+i)%2==0)
			ec++;
		else
			oc++;
	}
	printf("even number %d",ec);
	printf("odd number %d", oc);
}

