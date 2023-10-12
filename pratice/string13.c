#include<stdio.h>
#include<string.h>
int main()
{
	char str[10]="kiran shir";
	char *sub;
	sub=strstr(str, "s");
	printf("%s",sub);
	return 0;
}

