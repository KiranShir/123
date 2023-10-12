#include<stdio.h>
int main()
{
	int a[8]={1,2,3,4,5,6,7,8};
	int max=a[0];
	int smax=a[0];
	int i;
	for(i=0;i<=7;i++)
	{
		if(a[i]>max)
		{     smax=max;
			max=a[i];
		}
	}
	printf("%d",max);

}
