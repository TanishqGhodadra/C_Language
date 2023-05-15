#include<stdio.h>
#include<string.h>

void main()
{
	FILE *p1;
	FILE *p2;
	
	
	
	char a[30];
	
	p1 =fopen("C:\\Users\\r2\\Desktop\\tg-1.txt","w");
		
	p2 =fopen("C:\\Users\\r2\\Desktop\\tg-2.txt","r");
	
	fscanf(p2,"%[^\n]",&a);
	
	printf("%s",a);
	fprintf(p1,"%s",a);
	
	
	
}
