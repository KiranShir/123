#include<stdio.h>
int main()
{
	int i;
	int a[5]={13,45,67,32,12};
	for(i=0;i<5;i++)
		if(a[i]<35)
			printf("%d",i);
}
