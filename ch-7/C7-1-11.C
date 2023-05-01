#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			if(j%2==1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}

		}printf("\n");
	}
	getch();
}