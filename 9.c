#include<stdio.h>
int main()
{
	int a=5,*pi=&a;
	char b='x',*pc=&b;
	float c=5.5,*pf=&c;
	printf("vaue of pi=adress of a=%p\n",pi);
	printf("value of pc=adress of b=%p\n",pc);
	printf("value of pf=adress of c=%p\n",pf);
	pi++;
	pc++;
	pf++;
	printf("value of pi=%p\n",pi);
	printf("value of pc=%p\n",pc);
	printf("value of pf=%p\n",pf);
}
