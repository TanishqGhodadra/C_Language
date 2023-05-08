#include<stdio.h>
#include<string.h>

void main()
{
	char str1[10],str2[10];
	int count=0,i;
	
	printf("Enter first name: ");
	gets(str1);
	
	strcpy(str2,str1);
	strrev(str2);
	
	count = strcmp(str1,str2);
	
	if(count == 0)
	{
		printf("%s is palindrome!!\n : ",str1);
	}
	else
	{
		printf("%s is not palindrome!!\n : ",str1);
	}
	printf("Name1\t: ");
	puts(str1);\
	
	printf("Name2\t: ");
	puts(str2);
	
	printf("comprison \t: %d",count);
}
