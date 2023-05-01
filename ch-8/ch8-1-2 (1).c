#include<stdio.h>
#define P printf

void main()
{
	int n;
	P("enter length of array :");
	scanf("%d",&n);
	
	int a[n],i,sum=0;
	for(i=0;i<n;i++)
	{
		P("entr a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		P("a[%d] : %d",i,sum);
		sum=sum+a[i];
	}
}
