#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,s;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(s=4;s>=i;s--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}printf("\n");

	}
	for(i=1;i<=5;i++)
	{
		for(s=1;s<i;s++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}printf("\n");
	}

	getch();

}