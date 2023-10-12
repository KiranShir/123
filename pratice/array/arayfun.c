#include<stdio.h>
void fun(int arr[])
{
	 arr[2]=20;
}


int main()
{
int arr[5]={1,2,3,4,5};
printf("%d\n",arr[2]);
fun(arr);
printf("%d\n",arr[2]);
}
