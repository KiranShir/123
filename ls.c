#include<stdio.h>
int main()
{
	int a[10],n,e,i,found=0,l,h,mid;
	printf("enter no of the elment");
	scanf("%d",&n);
	printf("enter%d 5 element",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("element you wannt serach");
	scanf("%d",&e);

    l=0;
    h=n-1;
    found=0;
    while(l<=h)
    {
       mid=(l+h)/2;
   
     if(e==a[mid])
     {
      found=1;
      break;
     }
     
     else if(e>a[mid])
	     
		     l=mid+1;
	    
     else if (e<a[mid])
	   
          h=mid-1;
     }
     
    
if(found==1)

	printf("element found at position%d",i+1);
else


	printf("elemenet not found");
}
