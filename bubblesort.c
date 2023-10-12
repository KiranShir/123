#include<stdio.h>
int main()
{
	 int a[10],n,i,j,temp;
	 printf("enter the no of element");
	 scanf("%d",&n);
	 printf("enter the array element");
	 for(i=0;i<n;i++)
	 {
		 scanf("%d",&a[i]);
	 }
	 for(i=1;i<n;i++)
	 {
		 for(j=0;j<n-i;j++)
		 {
			 if(a[j]>a[j+1])
			 {
				 temp=a[j];
				 a[j]=a[j+1];
				 a[j+1]=temp;
			 }
		 }
	 }
	 for(i=0;i<n;i++)
	 {
		 printf("%d",a[i]);
	 }
}
