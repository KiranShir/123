#include<stdio.h>
int main() {
	int  a = 10;
	void *p = &a;
	int *ptr = p;
	printf("%u\n",*ptr);
	printf("%u\n",p);

	return 0;
}
