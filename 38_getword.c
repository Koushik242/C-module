/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:03/12/2023
Description:WAP to implement getword function
Sample input:
Enter the string : Welcome to Emertxe
Sample output:
You entered Welcome and the length is 7
*/

#include <stdio.h>

int getword(char str[]);

int main()
{        
    // varaible declaration        
    int len = 0;	    
    char str[100];        
        
    // read string from user		
    printf("Enter the string : ");		
    scanf(" %[^\n]", str);
		
    len = getword(str);
                
    // display the results       
    printf("You entered %s and the length is %d\n", str, len);
}

int getword(char *str) 

{
	
    int length = 0;

	 //condition to stop incrementing the length count if it is null char or space char
        while ( *str != ' ' && *str != '\0')
	{
            *str++;
            length++;
	}

          //while printing the string in the main fn i have to just print the first string, so this statement
	if (*str == ' ')
	{
	    *str = '\0';
	}
	return length;
}
