#include<stdio.h>
#define P printf

int calc()
{
	int choice,a,b;
	do
	{
		
		P("\t\t\t\t\t\twelcom in the system\n\n\n\n\n");
		
		P("1=>   addition\n");
		P("2=>   subtraction\n");
		P("3=>   multiplication\n");
		P("4=>   divition\n");
		P("5=>   modulos\n");
		P("6=>   exit\n\n\n");
		P("enter your choice  :\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				P("A:");
				scanf("%d",&a);
				P("B:");
				scanf("%d",&b);
				P("addition  :%d",a+b);
				getch();
				break;

			case 2:
				P("A:");
				scanf("%d",&a);
				P("B:");
				scanf("%d",&b);
				P("subtraction  :%d",a-b);
				getch();
				break;

			case 3:
				P("A:");
				scanf("%d",&a);
				P("B:");
				scanf("%d",&b);
				P("mutiplication  :%d",a*b);
				getch();
				break;

			case 4:
				P("A:");
				scanf("%d",&a);
				P("B:");
				scanf("%d",&b);
				P("division  :%d",a/b);
				getch();
				break;

			case 5:
				P("A:");
				scanf("%d",&a);
				P("B:");
				scanf("%d",&b);
				P("modulos  :%d",a%b);
				getch();
				break;

			case 6:
				break;
		}


	}while(choice!=6);

	P("\n\n\n\n\t\t\t\t-------------------\n");
	P("\t\t\t\t||thanks to coming||\n");
	P("\t\t\t\t-------------------");
	
	return(a,b);
}

void main()
{
	calc();
	
}



