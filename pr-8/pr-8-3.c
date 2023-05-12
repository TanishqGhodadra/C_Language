#include<stdio.h>

void arrayinput(int a[],int n)
{
	int i;
	
	for (i=0; i<n; i++)
	{
		printf("Enter a[%d]: ");
		scanf("%d", &a[n]);
	}
}

void main()
{
	int n;
	
	printf("Enter the length of array : ");
	scanf("%d",&n);
	
	int a[n];
	int *ptr;
	
	ptr=&a[n];
	
	 void arrayinput();
	
	int i;
	
	for(i=n; i>0; i--)
	{
	  printf("a[%d]:%d\n",i,*(ptr-i));
	}
}


