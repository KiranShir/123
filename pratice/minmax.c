#include<stdio.h>
int main()
{
	int a[100],n,i,min,max;
	printf("enter arry size");
	scanf("%d",&n);
	printf("array %d element",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("max=%d",max);
	printf("min=%d",min);
}






