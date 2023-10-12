#include<stdio.h>
void increment (int *p)
{
	*p=(*p)+1;
//	printf("adress %d",&a);
}
int main()
{
	int a=10;
	increment(&a);
	printf("%d",a);
//	printf("adress %d",&a);
}
