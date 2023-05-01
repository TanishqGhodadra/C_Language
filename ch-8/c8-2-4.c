#include<stdio.h>
#define P printf

void main()
{
	int r,c;
	
	P("enter number of row   :");
	scanf("%d",&r);
	P("enter number of colmn :");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],s[r][c],i,j,sum =0;
	
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
			P("enter b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);		
	
		} P("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			P("%d ",a[i][j]);
			
			P("%d ",b[i][j]);
	
			s[r][c] = a[i][j] + b[i][j];
			
		
		} P("\n");  
	}	  P("\n");
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
				P(" %d",s[r][c]);
		}
		P("\n");
	}
	
}
