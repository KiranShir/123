 #include <unistd.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char *a="kiran";
     int n=write(1,a,strlen(a)+1);


	printf("%d",n);
}
