/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:16/11/2023
Description:WAP to implement your own isalnum() function
Sample input:
Enter the character: a
Sample output:
The character 'a' is an alnum character.
*/

#include <stdio.h>

// Function prototype for custom is-alphanumeric function
int my_isalnum(char ch);

int main()
{
    char ch;
    int ret;

    // Prompt user to enter a character
    printf("Enter the character:");

    // Read the character from the user
    scanf("%c", &ch);

    // Call the custom function to check if the entered character is alphanumeric
    ret = my_isalnum(ch);

    // Display the result based on the return value of the function
    if (ret)
    {
        printf("Entered character is alphanumeric\n");
    }
    else
    {
        printf("Entered character is not alphanumeric\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}

// Custom function to check if a character is alphanumeric
int my_isalnum(char ch)
{
    // Return true if the character is a digit (ASCII 48-57), an uppercase letter (65-90),
    // or a lowercase letter (97-122); otherwise, return false
    return ((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122));
}

