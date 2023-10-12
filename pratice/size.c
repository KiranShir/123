#include<stdio.h>
#define size_of(x) (char*)(&x+1)-(char*)(&x)
int main()
{
	int x =10;
	printf("%ld",size_of(x));
}
