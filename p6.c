#include<stdio.h>
int  main()
{
	int a=10,b=20;
	int *ptr1 ,*ptr2;
	ptr1=&a;
	ptr2=&b;
	printf("value of a=%d\n",*ptr1);
	printf("value of b=%d\n",*ptr2);
	a=40;
	b=50;
	ptr1=&b;
	ptr2=&a;
	printf("value of b=%d\n",*ptr1);
	printf("calue of a=%d\n",*ptr2);
	a=60;
	b=70;
	ptr1=&a;
	printf("value of a=%d\n",*ptr1);
	printf("value of b=%d\n",*ptr2);
}

