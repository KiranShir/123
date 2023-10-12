#include<stdio.h>
int main()
{
	int a[20],i,j,k,size;
	printf("enter a  size of an array");
	scanf("%d",&size);
	printf("enter the array element");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array original element");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<size;k++)
				{
					a[k]=a[k+1];
				}
			
				size--;
				j--;
			}
		}
	}
	
	printf("new array");
	for(i=0;i<size;i++)
	printf("%d",a[i]);
}

