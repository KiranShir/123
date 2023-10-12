#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	printf("enter a string");
	scanf("%s",str);
	printf("string is %s",str);
	printf("%s",strlw(str));
	return 0;
}
