#include<stdio.h>

void main()
{
	FILE *p1;
	
	char a[20];
	
	p1 = fopen("C:\\Users\\r2\\Desktop\\TG-6.txt","r");
	fscanf(p1,"%s",a);
	
	printf("name: %s",a);
	
	
}
