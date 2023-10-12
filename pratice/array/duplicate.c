#include<stdio.h>
int main()
{
	int a[4],i,j,k,n;
	printf("how many elemets in arraay");
	scanf("%d",&n);
	printf("enter array elemnent");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
                for(k=j+1;k<n;k++)
			a[k-1]=a[k];
			}
		}
	}
	j--;
	n--;

printf("duplicate elements are");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}


