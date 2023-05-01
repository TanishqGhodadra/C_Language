#include<stdio.h>
#define P printf

void main()
{
	int r,c;
	
	P("enter number of row   :");
	scanf("%d",&r);
	P("enter number of colmn :");
	scanf("%d",&c);
	
	int a[r][c],i,j,count = 0,average,sum =0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			P("enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		} P("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			P("%d ",a[i][j]);
			count++;
			sum = sum + a[i][j];
			average = sum / count;
		}   P("\n");
	}
			P(" \n length of array :%d",count);
			P("\n sum :%d",sum);
			P("\n  average : %d",average);
	
	
}

