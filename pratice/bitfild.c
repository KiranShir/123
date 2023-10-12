#include<stdio.h>
struct data{
	unsigned int x:11;
	unsigned int y:5;
	unsigned int z:7;
}data;
int main()
{
	data.x=0x702;
	data.y=0x50;
	data.z=0x30;
	printf("%d",sizeof(data));
	printf("%x",data.x);
}
