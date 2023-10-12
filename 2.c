#include<stdio.h>
#define size_of(x)((char*)(&x+1)-(char*)&x)
void main()
{
	char   x=1;
	printf("%ld",size_of(x));
}
