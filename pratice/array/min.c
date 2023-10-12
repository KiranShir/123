#include<stdio.h>
int main()
{
	char a[]={6,3,2,9,10,7,8,1};
	int i,min;
	min=a[0];
	for(i=1;i<8;i++)
	{
		if(min<a[i])
		{
			min=a[i];
		}
	//	printf("%d",min);
	}
	printf("%d",min);

}
