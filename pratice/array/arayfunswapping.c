#include<stdio.h>
void fun(int a[])
{
	int temp=a[0];
	a[0]=a[1];
	a[1]=temp;
	return ;
}
int main()
{
	int a[]={2,3};
	printf("%d\n%d",a[0],a[1]);
        fun(a);
	printf("%d\n%d",a[0],a[1]);
}
			
