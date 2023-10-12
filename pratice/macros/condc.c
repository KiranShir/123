#include<stdio.h>
#define A 10
#define B 30
int main()
{
	int res;
#if (A>B)

	res=A+B;
	printf("%d",res);
#elif(A==B)
	res=a*b;
	printf("%d",res);
#else
//	int res;
	res=A-B;
	printf("%d",res);
#endif
}
