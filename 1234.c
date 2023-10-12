#include<stdio.h>
#define START 1
int main()
{
#ifdef START 
	printf("hello");
#else
	printf("bye");
#endif
}

