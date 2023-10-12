#include<stdio.h>
int main()
{     
	int i=0;
	int (*p)[5];
	int q[5]={1,2,3,4,5};
	p=&q;
	for(i=0;i<5;i++)
		printf("%d",*(*p+i));
}
		
