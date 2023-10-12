#include<stdio.h>
int main()
{
	int age=10;
	float salary=104.40;
	int *intptr=&age;
	int  *fltptr=&salary;
	printf("adress of age=%p\n",intptr);
	printf("adress of salary=%p\n",fltptr);
}
