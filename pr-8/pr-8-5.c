#include<stdio.h>

void multiplevaluefuntion(int *a,int *b,int *c)
{
	*a=10;
	*b=20;
	*c=30;
}

void main()
{
	int a,b,c;
	
	multiplevaluefuntion(&a,&b,&c);
	
	printf("a:%d\nb:%d\nc:%d\n  ",a,b,c);
}
