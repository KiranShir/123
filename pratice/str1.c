#include<stdio.h>
struct sample
{
	int a;
	double r;
float c;	
	long int t;
	char d;
	//float e;
}s;
int main()
{
	printf("%d",sizeof(int));
	printf("%d",sizeof(double));
	printf("%d",sizeof(float));
			printf("%d",sizeof(long int));
			printf("%d",sizeof(char));
			printf("%d",sizeof(s));


}

