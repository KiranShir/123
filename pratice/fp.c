#include<stdio.h>
int add(int,int);
int main()
{
    int a,b;
    int(*fp)(int,int);
    int result;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    fp=add;
    result=(*fp)(a,b);
    printf("result=%d",result);





}
int add(int a, int b)
{
   int c = a+b;
   return c;
}
