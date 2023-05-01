#include<stdio.h>
void main()
{
	int i,n,a[n];
	
	printf("Enter size ofthe array : ");
	scanf("%d",&n);
	
	printf("Enter elements in array : ");
		for(i=0; i<n; i++)
			{
				scanf("%d",&a[i]);
			}
	printf("All negative elements in array are :  ");
	for(i=0; i<n; i++)
		{
			if(a[i] < 0)
			{
				printf("%d",a[i]);
			}
		}		
}
