#include<stdio.h>
#define a 10
#define b 20
int main()
{
	int res;

#if(a>b)
       res=a+b;
printf("%d",res);
#else
res=a-b;
printf("%d",res);
#endif
}

