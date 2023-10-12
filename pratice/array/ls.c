#include<stdio.h>
int main()
{
	int a[3];
	int n,max1,max2,min,i;
	    printf("how many elements");
	scanf("%d",&n);
	printf("enter the element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
}
max1=max2=min;
for(i=0;i<n;i++)
{
	if(a[i]>max1)
	{
		max2=max1;
		max1=a[i];
	}
	else if(a[i]>max2)
	{
		max2=a[i];
	}
}
printf("larges %d",max1);
printf("second largest %d",max2);
}

