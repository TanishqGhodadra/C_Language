#include<stdio.h>
#define P printf

void main()
{
	int n;
	P("enter length of array :");
	scanf("%d",&n);
	
	int a[n],i,j,fact;
	for(i=0;i<n;i++)
	{
		P("entr a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		fact=1;
		j=1;
		while(j<=a[i])
		{
		
		fact=fact*j;
		j++;
		}
		P("factorial of a[%d] : %d =%d\n",i,a[i],fact);
	}
	
	
	
}
