#include<stdio.h>

struct employee
{
	int id;
	char name[20];
	int age;
	char role[20];
	char city[20];
	int exeperience;
	char companyname[20];
};

void main()
{
	int n,i;
	printf("Enter the number of employee : ");
	scanf("%d",&n);
	
	struct employee e[n];
	
	system("cls");
	
	for(i=0; i<n; i++)
	{
		printf("employee (%d/%d)\n\n",i+1,n);
		
		printf("Enter id\t");
		scanf("%d",&e[i].id);
		
		printf("Enter name[20]\t");
		scanf("%s",&e[i].name[20]);
		
		printf("Enter age\t");
		scanf("%d",&e[i].age);
		
		printf("Enter role\t");
		scanf("%s",&e[i].role);
		
		printf("Enter city[20]\t");
		scanf("%s",&e[i].city[20]);
		
		printf("Enter exeperience\t");
		scanf("%d",&e[i].exeperience);
		
		printf("Enter company name\t");
		scanf("%s",&e[i].companyname);
	}
	
	 printf("id\tname[20]\tage\trole\tcity[20]\texeperience\tcompanyname\t");
	for(i=0; i<n; i++)
    {
    	printf("%d\t",&e[i].id);
    	printf("%s\t",&e[i].name);
    	printf("%d\t",&e[i].age);
    	printf("%s\t",&e[i].role);
    	printf("%s\t",&e[i].city[20]);
    	printf("%d\t",&e[i].exeperience);
    	printf("%s\n",&e[i].companyname);
	}
    
}
