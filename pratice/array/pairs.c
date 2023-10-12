#include<stdio.h>
int main()
{
	int a[8]={1,2,3,4,5,6,7,8};
	int x=12;
	int count=0;
	int i,j;
	for(i=0;i<=7;i++)
	{
		for(j=i+1;j<=7;j++)
		{
			if(a[i]+a[j]==x)
			{
				count++;
			}
}
}
printf("%d",count);
}
