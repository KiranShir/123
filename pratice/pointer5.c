#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,n,max,min;
	printf("enter array size");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter %d element",n);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	max=min=*(a+0);
	for(i=0;i<n;i++)
	{
		if(*(a+i)>max)
		
			max=*(a+i);
			
                 if(*(a+i)<min)
			 min=*(a+i);
	}
	printf("max element %d\n", max);
	printf("min element%d\n", min);
}
