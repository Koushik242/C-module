/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:21/11/2023
Description:WAP to generate fibbonacci numbers using recursion
Sample input:
Enter a number: 21
Sample output:
0, 1, 1, 2, 3, 5, 8, 13, 21
*/

#include <stdio.h>

// Function prototype
void positive_fibonacci(int, int, int, int);

int main()
{
    int limit;

    // User input for the limit of the positive Fibonacci series
    printf("Enter the limit: ");
    scanf("%d", &limit);

    // Call the positive_fibonacci function with initial values
    positive_fibonacci(limit, 0, 1, 0);

    return 0;
}

// Function to generate and print positive Fibonacci series
void positive_fibonacci(int limit, int n1, int n2, int next)
{
    // Check if the input limit is less than 0 and print an error message
    if (limit < 0)
    {
        printf("Invalid input\n");
        return; // Exit the function if the input is invalid
    }

    // Generate and print positive Fibonacci series
    while (next <= limit)
    {
        printf("%d, ", next);

        // Update Fibonacci sequence
        n1 = n2;
        n2 = next;
        next = n1 + n2;
    }
}

