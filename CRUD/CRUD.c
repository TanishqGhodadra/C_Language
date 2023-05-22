#include<stdio.h>

void input(int*);
void arrayinput(int[],int);
void arraydisplay(int[],int);

void arrayCRUD(int[],int*);
void insert(int[],int**,int,int);
void updata(int[],int,int);
void delet(int[],int**,int);

void main()
{
	int n;
	input(&n);
	int a[n];
	
	arrayinput(a,n);
	arraydisplay(a,n);
	
	arrayCURD(a,&n);
	
	
}

void arrayinpute(int a[],int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("enter %d value : ",i+1);
		scanf("%d",&a[i]);
	}
}

void arraydispaly(int a[],int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("%d elements: %d\n",i+1,a[i]);
		
	}
}

void arrayCRUD(int a[],int*n)
{
	int choice;
	int pos,val;
	 
	do
	{
		printf("1) Insert\n2) Update\n3) Delete\n4) display\n5) exit\nEnter your choice : ");
		scanf("%d",choice);
		
		switch(choice)
		{
			case 1:
				   printf("Enter position : ");
				   scanf("%d",&pos);
				   printf("Enter value : ");
				   scanf("%d",&val);
				   
				   insert(a,&n,pos,val);
				   break;
			
			case 2:
				   printf("Enter position : ");
				   scanf("%d",&pos);
				    printf("Enter value : ");
				   scanf("%d",&val);
				   
				   update(a,pos,val);
				   break;
			case 3:
				   printf("Enter position : ");
				   scanf("%d",&pos);
				   
				   delet(a,&n,pos);
				   break;
			case 4:
				   arraydisplay(a,*n);
				   break ;
			case 5:
				    break;
		}    
	} while(choice!=5);
}
