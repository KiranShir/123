#include<stdio.h>
struct abc
{
	int x;
        int y;
};
int main()
{
	struct abc s1={0,1};
	struct abc *ptr;
		ptr=&s1;
    printf("%d%d",ptr->x,ptr->y);

		    }
