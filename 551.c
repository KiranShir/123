#include<stdio.h>
int main()
{
int i;
int a[]={1,2,3,4,5};
for(i=0;i<5;i++)
	printf("%d\n",&a[i]);
        printf("%d\n",(a+i));
	printf("%d\n",a[i]);
	printf("%d\n",*(a+i));
}

