#include<stdio.h>
int main()
{
	char x,y;
	if((&y-&x)<0)
		printf("stack down \n");
	else
		printf("stack up\n");
}
