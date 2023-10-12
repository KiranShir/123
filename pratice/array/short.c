#include<stdio.h>
int main()
{
	int a[5];
     int i,j,temp,n;
     printf("how many element");
     scanf("%d",&n);
	printf("enter the arry element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("shorted element");
	for(i=0;i<n;i++)
	
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	
     //	printf("array element");
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
}
