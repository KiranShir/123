#include<stdio.h>
//#define PI 3.14
int main()
{
#ifndef PI
	printf("PI is not defined");
#else
	printf("PI is defined");
#endif
}
