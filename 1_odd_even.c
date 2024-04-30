/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:10/10/2023
Description:WAP to check if number is odd or even
Sample input:
Enter the value 'n' : 12
Sample output:
12 is positive even number.
*/

#include <stdio.h>

int main()
{
    // Declare an integer variable named 'num'
    int num;

    {
        // Prompt the user to enter a number
        printf("Enter the value of 'n' : ");
        // Read the entered number and store it in the 'num' variable
        scanf("%d", &num);

        // Check if the entered number is positive
        if (num > 0)
        {
            // Check if the positive number is even
            if (num % 2 == 0)
            {
                // Print a message indicating that the number is positive and even
                printf("%d is positive even number\n", num);
            }
            else
            {
                // Print a message indicating that the number is positive and odd
                printf("%d is positive odd number\n", num);
            }
        }
        // Check if the entered number is negative
        else if (num < 0)
        {
            // Check if the negative number is even
            if (num % 2 == 0)
            {
                // Print a message indicating that the number is negative and even
                printf("%d is negative even number\n", num);
            }
            else
            {
                // Print a message indicating that the number is negative and odd
                printf("%d is negative odd number\n", num);
            }
        }
        // If the entered number is neither positive nor negative 
        else
        {
            // Print a message indicating that the number is neither odd nor even
            printf("%d is neither odd nor even\n", num);
        }
    }

    // Indicate successful program execution by returning 0
    return 0;
}	
