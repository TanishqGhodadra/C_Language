#include<stdio.h>  

void input(char a[])
{
	printf("Enter the name : ");
	scanf("%[^\n]",a);
	
}

void length()
{
	int i,count=0;
	int *ptr;
	
	ptr = &count;
	
	for(i=0; i<n; i++)
	{
		*ptr++;
	}
	
	printf("name[%s] has %d length",str,ptr);
}

void main()
{
	inpute(char a[]);
	langth();
}
