#include<stdio.h>
#include<conio.h>

void main()
{
	char i,j;
	clrscr();
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",i);
		}printf("\n");
	}

	getch();
}