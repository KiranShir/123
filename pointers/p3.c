#include<stdio.h>
int main()
{
	int age=10;
	float salary=108.0;
	int *ptr;
	float *ptr1;
	ptr=&age;
	ptr1=&salary;
	printf("value of age=%p\n",*ptr);
	printf("value of salary=%p\n", *ptr1);
}

