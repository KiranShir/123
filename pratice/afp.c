#include<stdio.h>
float add(float,int);
float sub(float,int);
int main()
{
	float x;
	int y;
	float(*fp[2])(float,int);
		fp[0]=add;
	        fp[1]=sub;
		printf("enter the values of x and y");
		scanf("%f%d",&x,&y);

		float r=(*fp[0])(x,y);
		printf("sum of two values %f",r);


			r=(*fp[1])(x,y);
				printf("diff of two values %f",r);
			//	r=(*fp[2])(x,y);


}

float add(float x , int y)
{
  float a=x+y;
  return a;

       
}
float sub(float x, int y)
{
float a =x-y;
return a;
}

