#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,n;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter %d element",n);
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	for(i=0;i<n;i++)
{
	switch(*(a+i))
	{
case0:printf("\nzero");break;
case1:printf("\none");break;
case2:printf("\n two");break;
case3:printf("\n three");break;
	}
}
}
