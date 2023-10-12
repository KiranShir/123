#include<stdio.h>
int main()
{
	int n,i;
	  float  sum=0,avg;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
			sum=sum+i;
	}
	avg=sum/n;
		printf("%f",avg);
	printf("%f",sum);
}
