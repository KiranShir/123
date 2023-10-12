 #include <unistd.h>
#include<stdio.h>
int main()
{
	char b[30],c[30]="Arijit";
	int n =read(0,b,10);
	printf("%dvalue n\n",n);
     int r=write(1,c,strlen(c));
     printf("%dvalue of r \n",r);
   
}
