#include "header.h"
int main()
{
	int p[2],ret;
	ret=pipe(p);
	if(ret<0)
	{
		perror("pipe");
		return 0;
	}
	printf("p[0]=%d p[1]=%d\n",p[0],p[1]);
	if(fork()==0)
	{
		while(1)
		{
			char b[20];
			printf("before reading in the child\n");
			read(p[0],b,20);
			printf("after reading lin child :%s\n",b);
		}
	}

	else
	{
		while(1)
		{
			char a[20];
			printf("enter the data");
			scanf("%s",a);
			write(p[1],a,strlen(a)+1);
		}
	}
}


