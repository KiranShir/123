#include<stdio.h>
#define sizeof(x) (char*)(&x+1)-(char*)(&x)
int main()
{
	int x=1;
	printf("%d",sizeof(x));
}
