#include<stdio.h>
int main()
{
	char str[50]="hello";
	int i;
	for(i=0;str[i];i++)
		printf("%s",str+i);
}
