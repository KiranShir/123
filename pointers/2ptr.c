#include<stdio.h>
int main() {
	int c;
	int a = 5,b = 10,f=9,t=10,x=3,y=6,z=66;
	int *p = &a,*u=&z;
	c = p-u;
	printf("%d\n",c);
         printf("%ld\n",p);
	 printf("%ld\n",u);
	return 0;
}
