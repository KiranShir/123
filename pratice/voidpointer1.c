#include<stdio.h>
int main()
{
	float b= 56.4;
	void *ptr;
	ptr=&b;
	printf("%f",*(float*)ptr);
}
