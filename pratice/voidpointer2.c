#include<stdio.h>
int main()
{
	int a[]={10,20,30};
	int *p=a;
	printf("%d",*(p+0));
	printf("%d",*(p+1));
	printf("%d",*(p+2));
}
