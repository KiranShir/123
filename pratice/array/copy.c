#include<stdio.h>
int main()
{
	int i;
	int a[5]={1,2,3,4,5};
	int b[5];
	for(i=0;i<=6;i++)
	{
		b[i]=a[6-i];
	}
	printf("%d",b[i]);
}
