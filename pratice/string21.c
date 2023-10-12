#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int len;
printf("enter a string");
scanf("%s",&s);
for(len=0;s[len]!='\0';len++);
printf("%d",len);
}
