#include<stdio.h>
int main()
{
	int alpha[5]={10,20,30,40,50};
	int *p;
	p=alpha;
	printf("acessing alpha values pointer variable\n");
	for(int i=0;i<5;i++)
	{
		printf("value by p[%d]=%d",i,*(p+i));
	}
}

