#include<stdio.h>
typedef int* ptr;
int main()
{
	ptr var;
	*var=30;
	printf("value of is var %ls", var);
	return 0;
}
