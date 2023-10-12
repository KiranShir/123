#include<stdio.h>
int main()
{
	unsigned char data=100;
	data=(((data & 0x0f)<<4)|((data & 0xf0)>>4));
	printf("%u\n",data);
	return 0;
}
