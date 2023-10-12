#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,i;
	printf("enter a number");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
			if(ptr==NULL)
		
			printf("memory is not alloctaed");
			
			else
	
			printf("memory is sucessfully is allocated\n");
			printf("enter array element\n");
			for(i=0;i<n;i++)
			{
			scanf("%d", ptr+i);
					}
					printf("array element are");
					for(i=0;i<n;i++)
					{
					printf("%d",ptr[i]);
					}
					free(ptr);

					}
