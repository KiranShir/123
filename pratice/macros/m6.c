#include<stdio.h>
//#define PI 3.14
int main()
{
#ifdef PI
	printf("%f",PI*5*5);
#else
	printf("PI is not defined");
#endif
}
