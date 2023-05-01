#include<stdio.h>
#define P printf

void main()
{
	int r,c;
	
	P("enter number of row   :");
	scanf("%d",&r);
	P("enter number of colmn :");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum =0;
	
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
			if(i==0 || j==0 || j==c-1 || i==r-1)
			{
				P("%d ",a[i][j]);
				sum = sum + a[i][j];	
			}
			else
			{
				P("  ");
			}
		}P("\n");
	
	}
		P("sum : %d",sum);
	
	
	
	
	
}
