#include<stdio.h>

void arrayInput (int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void arraysum(int a[],int n)
{
	int i,sum=0;
	
	for(i=0;i<n;i++)
	{
		sum += a[i];
	}
	printf("sum : %d ",sum);
}

void main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	
	int a[n];
	
	arrayInput(a,n);
	arraysum(a,n); 
	
}
