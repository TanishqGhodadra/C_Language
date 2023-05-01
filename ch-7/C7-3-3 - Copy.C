#include<stdio.h>
#include<conio.h>
#define P printf
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			P("%d",j);
		} P("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			P("%d",j);
		} P("\n");
	}

	getch();
}