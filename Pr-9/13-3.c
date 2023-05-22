#include<stdio.h>

void main()
{
	FILE *p1;
	FILE *p2;
	
	int i,n,num;
	
	printf("enter the num :");
	scanf("%d",num);
	
	p1 = fopen("C:\\Users\\r2\\Desktop\\TG-7.txt","a");
	p2 = fopen("C:\\Users\\r2\\Desktop\\TG-8.txt","a");
	
	for(i=0; i<n; i++)
	{
		if(i%2==0)
		{
			fprintf(p1,"num is even");
		}
		
		else if(i%2==1)
		{
			fprintf(p2,"num is odd");
		}
	}
}
