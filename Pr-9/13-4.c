//. C program to write even, odd and prime numbers to separate file.

#include<stdio.h>

void main()
{
	
	FILE *f1;
	FILE *f2;
	
	int a;
	
	printf("press any number :");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		f1 = fopen("C:\\Users\\r22\\Desktop\\even.txt","w");
		fprintf(f1,"%d is even number",a);
	}
	else if(a%2==1)
	{
		f2 = fopen("C:\\Users\\r22\\Desktop\\odd.txt","w");
		fprintf(f2,"%d is odd number",a);
	}
	
	
}
