#include<stdio.h>
#define my_sizeof(x) (char*)(&x+1)-(char*)(&x)
int main()
{
	char x='a';
	printf("%ld",my_sizeof(x));
}
