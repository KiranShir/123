#include<stdio.h>
int main()
{
	int x=5,y=7;
	printf("before swapping:%d%d\n",x,y);
	swap(x,y);
	printf("after swapping%d%d\n",x,y);
}
swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swapping%d%d",a,b);
}
