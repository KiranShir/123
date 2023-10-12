#include<stdio.h>
struct abc
{
	int x;
	int *p;
};
int main()
{
	struct abc s1;
	s1.x=20;
          int x=30; 
	s1.p=&x;
	printf("%d",s1.x);
	printf("%d",*(s1.p));

	

}

