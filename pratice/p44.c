#include<stdio.h>
void  display(void (*p)())

{
	for(int i=1;i<5;i++)
	{
		p(i);
	}
}
void print_number(int num)
{
	cout<<num;
}
int main()
{
	void(*p)(int);
	printf("the values are");
	display(print_number);
	return 0;
}
