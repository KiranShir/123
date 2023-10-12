
#include<stdio.h>
int main()
{
	int a[5][5],i,j,n,m;
	printf("enter the n of rows andcol");
	scanf("%d%d",&m,&n);
	printf("enter %d matrix",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

		for(i=0;i<m;i++)
		{
			for(j=0;i<n;j++)
				printf("%d",a[i][j]);
			printf("\n");
		}
	}
}

