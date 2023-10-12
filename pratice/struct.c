#include<stdio.h>
struct xyz
{
	int x;
	char y;
};
int main()
{
	struct xyz s1;
	s1.x=50;
	s1.y='A';
	printf("%d",s1.x);
	printf("%d",s1.y);
}
