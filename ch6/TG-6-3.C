#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n;
clrscr();
printf("enter ending point :");
scanf ("%d",&n);
while(i<=10)
{
printf("%d %d %d\n" ,n,i,n*i);
i++;
}
getch();
}