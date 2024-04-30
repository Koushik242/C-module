/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
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

    // Check if the entered number is less than 0
    if (num <= 0)
    {
        // Fibonacci series up to the entered number
        while (fib1 >= num)
        {
            // Print the current Fibonacci number
            printf("%d ", fib1);

            // Update Fibonacci numbers
            temp = fib1 - fib2;
            fib1 = fib2;
            fib2 = temp;
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

