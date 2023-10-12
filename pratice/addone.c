#include<stdio.h>
int main()
{
int x;
printf("enter a first number");
scanf("%d",&x);
x=-(~x);
printf("%d",x);
}
