/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:16/11/2023
Description:WAP to implement your own isxdigit() function
Sample input:Enter the character:3
Sample output:
Enter the character:3
Entered character is  an hexadecimal digit
*/

#include <stdio.h>

// Function prototype
int is_xdigit(char);

int main() 
{
    char ch;
    short ret;

    // Prompt user for input
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leading whitespaces

    // Call is_xdigit function and store the result in ret
    ret = is_xdigit(ch);

    // Based on the return value of the function, print the appropriate message
    if (ret) 
    {
        printf("Entered character is a hexadecimal digit.\n");
    }
    else 
    {
        printf("Entered character is not a hexadecimal digit.\n");
    }

    return 0;
}

// Function definition for is_xdigit
int is_xdigit(char c) 
{
    // Check if the character is a digit (0-9) or a letter (A-F or a-f)
    return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'));
}

