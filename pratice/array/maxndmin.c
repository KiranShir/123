#include<stdio.h>
int main()
{

	int  a[100],size,i,max,min;
	printf("enter the array size");
	scanf("%d",&size);
	printf("enter the value of array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[i];
	for(i=0;i<size;i++)
{
	if(a[i]>max)
	{
		max=a[i];
	}
     	else if(a[i]>min)
	{
		min=a[i];
	}
}
printf("max value of array%d",max);
printf("min value of array %d",min);
}
