#include<stdio.h>
int main()
{
	int x=8,y=9;
	printf("before swapping%d%d",x,y);
	swap(&x,&y);
	printf("after swapping %d%d",x,y);
}
swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("after swapping%d%d",*a,*b);
}
