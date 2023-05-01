#include<stdio.h>
#include<conio.h>
#define P printf
void main()
{
	int i,j;
	clrscr();
	for(i=5;i>=2;i--)
	{
		for(j=1;j<=i;j++)
		{
			P("%d",j);
		} P("\n");
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			P("%d",j);
		} P("\n");
	}

	getch();
}