#include<stdio.h>

void division()
{
	int a;
	
	printf ("Enter a : ");
	scanf("%d",&a);
	
	if(a%3==0 || a%5==0)
	{
		printf("division by 3 or 5 : ");
	}
	else
	{
		printf("not division by 3 or 5 :");
	}
}
void main()
{
	division();
}
