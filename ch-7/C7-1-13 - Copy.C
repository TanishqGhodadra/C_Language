#include<stdio.h>
#include<conio.h>

void main()
{
	char i,j,c='a';
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",c);
			c++;
		}printf("\n");
	}
	getch();
}