#include<stdio.h>

void main()
{
	char a[10];
	
	printf("Enter name: ");
	scanf("%s",&a);
	
	int i;
	
	if (a[0]>=97 && a[0]<=122)
		{
		  a[i]-=32;
		}
		
	for (i=1; i<10; i++)
		{
		   if(a[i]>=65 && a[i]<=90)
		   {
		   	a[i]+=32;
		   }
		}	
		
	printf("string : %s\n",a);	
}
