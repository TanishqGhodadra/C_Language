#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=0;
clrscr();
printf("Enter number : ");
scanf("%d", &n);
while(n>0)
{
	n/=10;
	c++;
}
printf("number has %d digits",c);
getch();
}

