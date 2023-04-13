#include<stdio.h>
#include<conio.h>
main()
{
   int num,reverse=0,rem;
   clrscr();
   printf("enter number");
   scanf("%d",&num);
   while(num>0)
   {
   rem=num%10;
   reverse=reverse*10+rem;
   num=num/10;
   }
   printf("reverse num%d",reverse);

  getch();
}