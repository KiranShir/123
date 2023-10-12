#include<stdio.h>
int main()
{
	int i,j,min,temp,size;
	int a[5];
	printf("enter the size of an arry");
	scanf("%d",&size);
	printf("element are");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<size;i++)
	{
		 min=i;
	}
	for(i=j+1;j<size;j++)
	{
	
	if(a[j]<a[min])
	{ 
		min =j;
	}
	        temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}

	printf("sorted elements are");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
}
