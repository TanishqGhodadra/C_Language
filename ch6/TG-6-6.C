#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("Enter ending point : ");
	scanf("%d",&n);
	do
	{
		if(i%2==0)
			{
			printf("%d ", i);
			}
			i++;
	}while(i<=n);
	getch();
}