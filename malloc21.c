#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int *a=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
	}
        free(a);
	int *b=(int*)realloc(a,2*n*sizeof(int));
	printf("previous block adress=%d,new adress=%d\n",a,b);


	for(i=0;i<2*n;i++)
	{
		printf("%d",b[i]);
	}
}
