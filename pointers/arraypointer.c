#include<stdio.h>
void main()
{
	int *p[3];
	int x=20,y=30,z=30;
	p[0]=&x;
	p[1]=&y;
	p[2]=&z;
	int i;
	for(i=0;i<3;i++)
	{
		printf("value of var p[%d]=%d",i,*p[i]);
	
	
	}
}

