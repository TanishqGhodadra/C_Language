#include<stdio.h>

struct stundent
{
	int id;
	char name[20];
	int age;
	char course[20];
	char city[20];
	int std;
	char school[20];
};

void main()
{
	int n,i;
	printf("Enter the number of stundnt : ");
	scanf("%d",&n);
	
	struct stundent s[n];
	
	system("cls");
	
	for(i=0; i<n; i++)
	{
		printf("Stundent (%d/%d)\n\n",i+1,n);
		
		printf("Enter id\t");
		scanf("%d",&s[i].id);
		
		printf("Enter name[20]\t");
		scanf("%s",&s[i].name[20]);
		
		printf("Enter age\t");
		scanf("%d",&s[i].age);
		
		printf("Enter course[20]\t");
		scanf("%s",&s[i].course[20]);
		
		printf("Enter city[20]\t");
		scanf("%s",&s[i].city[20]);
		
		printf("Enter std\t");
		scanf("%d",&s[i].std);
		
		printf("Enter school[20]\t");
		scanf("%s",&s[i].school[20]);
		
		system("cls");
	}
	
	      printf("id\tname\tage\tcity\tcorse\tstd\tschool\n");
    for(i=0; i<n; i++)
    {
    	printf("%d",&s[i].id);
    	printf("%s",&s[i].name);
    	printf("%d",&s[i].age);
    	printf("%s",&s[i].course);
    	printf("%s",&s[i].city);
    	printf("%d",&s[i].std);
    	printf("%s",&s[i].school);
	}
    
}
