/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:16/11/2023
Description:WAP to implement your own ispunct() function
Sample input:
Enter the character: a
Sample output:
Entered character is not punctuation character
*/

#include <stdio.h>

// Function prototype for custom is-punctuation function
int my_ispunct(char ch);

int main()
{
    char ch;
    int ret;

    // Prompt user to enter a character
    printf("Enter the character:");

    // Read the character from the user
    scanf("%c", &ch);

    // Call the custom function to check if the entered character is a punctuation character
    ret = my_ispunct(ch);

    // Display the result based on the return value of the function
    if (ret)
        printf("Entered character is a punctuation character\n");
    else
        printf("Entered character is not a punctuation character\n");

    // Return 0 to indicate successful execution
    return 0;
}

// Custom function to check if a character is a punctuation character
int my_ispunct(char ch)
{
    // Return true if the character is a punctuation character (ASCII 33-47, 58-64, 91-126); otherwise, return false
    return ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 98 && ch <= 126));
}

