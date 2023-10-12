#include<stdio.h>
#define PI_VALUE 3.144f
#define AREA_OF_CIRCLE(x) ((PI_VALUE)*(x)*(x))
int main(void)

{
	float area_of_circle;
	area_of_circle=AREA_OF_CIRCLE(2);
	printf("circle=%f",area_of_circle);
	return 0;
}
