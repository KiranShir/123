#include<stdio.h>
int main()
{
	int x=0x1;
	if((char)x&1)
		printf("little endian");
	else
		printf("big endian");
}
