#include<stdio.h>
#include<conio.h>
#define P printf
void main()
{
	int i,j,s;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			P("%d",j);
		}
		for(s=4;s>=i;s--)
		{
			P("  ");
		}
		for(j=i;j>=1;j--)
		{
			P("%d",j);
		} P("\n");
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			P("%d",j);
		}
		for(s=4;s>=i;s--)
		{
			P("  ");
		}
		for(j=i;j>=1;j--)
		{
			P("%d",j);
		} P("\n");
	}

	getch();
}