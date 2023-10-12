#include<stdio.h>
void func1(void(*ptr)());
void func2();
int main()
{
	func1(func2);
	return 0;
}
void func1(void(*ptr)())
{
	printf("function 1 is called");
	(*ptr)();
}
void func2()
{
	printf("function 2 is called");
}
