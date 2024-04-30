/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:11/10/2023
Description:WAP to generate positive Fibonacci numbers
Sample input:
Enter a number:100
Sample output:
The Fibonacci series of 100 is: 0 1 1 2 3 5 8 13 21 34 55 89
*/

#include <stdio.h>

int main()
{
    // Declare variables to store Fibonacci series terms and temporary values
    int num, fib1, fib2, temp;

    // Initialize the first two Fibonacci numbers
    fib1 = 0;
    fib2 = 1;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the input is non-negative
    if (num >= 0)
    {
        // Print the first Fibonacci number
        printf("%d ", fib1);

        // Check if the entered number is greater than 0
        if (num > 0)
        {
            // Print the second Fibonacci number
            printf("%d ", fib2);

            // Continue generating Fibonacci numbers until reaching the entered number
            while (fib1 + fib2 <= num)
            {
                // Update Fibonacci numbers
                temp = fib1 + fib2;
                fib1 = fib2;
                fib2 = temp;

                // Print the current Fibonacci number
                printf("%d ", fib2);
            }
        }

        // Move to the next line after printing the series
        printf("\n");
    }
    else
    {
        printf("Invalid input\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}

