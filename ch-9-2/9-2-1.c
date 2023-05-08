#include<stdio.h>
#include<string.h>

void main()
{
	char username,password;
	
	printf("Enterthe username: ");
	gets(username);
	
	printf("Enterthe password: ");
	gets(password);
	
    if(strcmp(username,"user")==0)
    {
    	if(strcmp(password,"defauit")==0)
    	{
    		printf("user successfully iogged in.....");
		}
    		else
    		{
    			printf("password entered is invalid");
			}
			else
			{
				printf("username entered is invalid");
			}
		}
	}
}
