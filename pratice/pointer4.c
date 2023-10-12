#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,n;
	printf("enter array size");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter %d element",n);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=0;i<n;i++)
		*(a+i)=*(a+i)**(a+i);
	printf("square for given array are");
	for(i=0;i<n;i++)
		printf("%d",*(a+i));
}

