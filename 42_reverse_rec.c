/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:27/11/2023
Description:WAP to reverse the given string using recursive method
Sample input:
Enter a string : EMERTXE
Sample output:
Reverse string is : EXTREME
*/

#include <stdio.h>
#include <string.h>

// Function to reverse a string recursively
void reverse_recursive(char str[], int start, int end)
{
    if (start >= end) 
    {
        return; 
    }

    // Swap characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively call the function with updated indices
    reverse_recursive(str, start + 1, end - 1);
}

int main() {
    char str[30];

    printf("Enter any string : ");
    scanf("%[^\n]", str);

    int len = strlen(str);

    // Call the recursive function
    reverse_recursive(str, 0, len - 1);

    printf("Reversed string is %s\n", str);

    return 0;
}

