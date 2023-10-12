#include<stdio.h>
int main()
{ 
	int num,binary_num,decimal=0,rem,base=1;
	printf("enter a binary number");
	scanf("%d",&num);
	binary_num=num;
	while(num>0)
	{
		rem=num%10;
		decimal=decimal+rem*base;
		num=num/10;
		base=base*2;
	}
	printf("%d\n",binary_num);
	printf("%d\n",decimal);
}
