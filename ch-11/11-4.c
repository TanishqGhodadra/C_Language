#include<stdio.h>

void cube()
{
	int a,cube;
	int *ptr;
	
	ptr = &a;
	
	printf("Enter a : ");
	scanf("%d",&a);
	
	cube = a*a*a;
	printf("cube: %d",cube);
	
	
}

void main()
{
	cube();
}

