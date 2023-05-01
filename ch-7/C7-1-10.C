#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,count=1;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",count);
			count++;
		}printf("\n");
	}
	getch();
}