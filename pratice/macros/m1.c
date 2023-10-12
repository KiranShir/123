#include<stdio.h>
int main()
{
	printf("FILE:%s\n",__FILE__);
	printf("date:%s\n",__DATE__);
	printf("time%s\n",__TIME__);
	printf("line%d\n",__LINE__);
	printf("stdc%d\n",__STDC__);
	return 0;
}
