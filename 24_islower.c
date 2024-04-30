/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:16/11/2023
Description:WAP to implement your own islower() function
Sample input:
Enter the character: a
Sample output:
Entered character is lower case alphabet
*/

#include <stdio.h>

// Function prototype for custom is-lowercase function
int my_islower(int);

int main()
{
    char ch;
    int ret;

    // Prompt user to enter a character
    printf("Enter the character:");

    // Read the character from the user
    scanf("%c", &ch);

    // Call the custom function to check if the entered character is a lowercase alphabet
    ret = my_islower(ch);

    // Display the result based on the return value of the function
    if (ret)
        printf("Entered character is a lowercase alphabet\n");
    else
        printf("Entered character is not a lowercase alphabet\n");

    // Return 0 to indicate successful execution
    return 0;
}

// Custom function to check if a character is a lowercase alphabet
int my_islower(int ch)
{
    // Return true if the character is a lowercase letter (ASCII 97-122); otherwise, return false
    return (ch >= 97 && ch <= 122);
}

