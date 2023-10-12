#include<stdio.h>
int main()
{
	int a[20][10],m,n,i,j;
	printf("enter the array size");
	scanf("%d%d",&m,&n);
	printf("enter %d element",m*n);
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	printf("arry \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		
			printf("%d",a[i][j]);
		printf("\n");
		}
	
}
