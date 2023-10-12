#include<stdio.h>
#define MAX(a,b) (a>b)
int main()
{
#if MAX
	printf("a is maxixmum %d",MAX(10,20));

#else
			printf("b is maximum %d",MAX(10,20));
#endif
				}
