#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("Enter starting point : ");
scanf("%d",&i);
while(i>=1)
{
printf("%d",i);
i--;
}
getch();
}