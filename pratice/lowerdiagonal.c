#include<stdio.h>
int main()
{
	int a[10][20],m,n,i,j;
	printf("enter the array size");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		for(i=0;i<m;i++)
	       for(j=0;j<n;j++)
		if(i>=j)
		{
			a[i][j]=1;
			else
				a[i][j]=0;
		}
	
	printf("array \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)

         	printf("%d"a[i][j]);
	}
	}
