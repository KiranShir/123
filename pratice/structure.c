#include<stdio.h>

struct student{
	int roll;
	char name[100];
	float marks;
};
int main()
{
	struct student *ptr=0;
	ptr++;
	printf("size of the structure %d",ptr);
	return 0;
}
