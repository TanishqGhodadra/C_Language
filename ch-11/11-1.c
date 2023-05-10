#include<stdio.h>

void main()
{
	int a,squar ;
	int *ptr;
	
	ptr = &a;
	
	printf("Enter a:");
	scanf("%d",ptr);
	
	squar = a*a;
	printf("squar :%d",squar );
}
