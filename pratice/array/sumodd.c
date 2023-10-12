#include<stdio.h>
int main()
{
	int i;
	int a[9]={1,2,3,4,5,6,7,8,9};
	int sumeven=0;
	int sumodd=0;
	for(i=0;i<=8;i++)
	{
		if(i%2==0)
		{
			sumeven=sumeven+a[i];
		}
		else
		{
			sumodd=sumodd+a[i];
           }
		int res=sumeven-sumodd;
		printf("%d",res);
	}
}
