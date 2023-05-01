#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3];
	printf("Enter value of matrix A : ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter value of matrix B : ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The value of matrix C is : ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&c[i][j]);
		}
		printf("\n");
	}
}
