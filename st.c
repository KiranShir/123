#include<stdio.h>
int main()
{
	char x,y;
	if((&y-&x)<0)
		printf("down stack");
	else
		printf("up stack");
}
