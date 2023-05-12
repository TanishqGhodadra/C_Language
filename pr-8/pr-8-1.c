#include<stdio.h>

void main()
{
	int a,b,c;
	int *ptr1;
	int *ptr2;
	
	ptr1 = &a;
	ptr2= &b;
	
	
	printf("Enter a:");
	scanf("%d",ptr1);
	
	printf("Enter b:");
	scanf("%d",ptr2);
	
	c=a;
	a=b;
	b=c;
	
	printf("a:%d\n",a);
	printf("b:%d\n",b);
}

