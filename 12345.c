#include<stdio.h>
#define  TEST 10
int main()
{
#if(TEST>50)
	printf("its graeter");
#elif(TEST<50)
	printf("its samller");
#else
	printf("equal to 50");
#endif
}
