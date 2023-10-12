#include<stdio.h>
int main()
{
	char a='x',*p1=&a;
	int b=12, *p2=&b;
	float c=12.4,*p3=&c;
	double d=18.34,*p4=&d;
	printf("size of p1=%u,sizeofp1=%u\n",sizeof(p1),sizeof(*p1));
	printf("size of p2=%u,sizeofp2=%u\n",sizeof(p2),sizeof(*p2));
	printf("size of p3=%u,sizeofp3=%u\n",sizeof(p3),sizeof(*p3));
	printf("size of p4=%u,sizeofp4=%u\n",sizeof(p4),sizeof(*p4));
}
