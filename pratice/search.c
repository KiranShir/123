#include<stdio.h>
int main()
{
	int a[100],n,i,sno,flag=0;
	printf("enter arry size");
	scanf("%d",&n);
	printf("enter %d element",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("enter the serach number");
	scanf("%d",&sno);
	for(i=0;i<n;i++)
	{
		if(a[i]==sno)
	
			flag=1;
		}
		if(flag==0)
		
		printf("element found");
		else
			printf("not found");

		
	
}
