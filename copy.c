#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],m,n,i,j;
	printf("enter rows and column element");
	scanf("%d%d",&m,&n);
	printf("enter %d element",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

			for(i=0;i<m;i++)
				for(j=0;j<n;j++)
					b[i][j]=a[i][j];
                                    for(i=0;i<m;i++)
				    {
					    for(j=0;j<n;j++)
						    printf("%d",a[i][j]);
				    }
	}
}
