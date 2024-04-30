/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:11/10/2023
Description:WAP to check if number is perfect or not
Sample input:
Enter a number: 6
Sample output:
Yes, entered number is perfect number
*/

#include <stdio.h>

int main() 
{
    // Declare variable to store the user input
    int num; 

    // Prompt user for input
    printf("Enter a number: ");
    
    // Read user input
    scanf("%d", &num);

    // Check if the input is less than or equal to 0
    if (num <= 0)
    {
        // Display an error message for invalid input
        printf("Error: Invalid Input. Enter only positive numbers.\n");
        
        // Return an error code
        return 1;
    }

    // Find divisors and calculate sum
    int sum = 0;

    for (int i = 1; i < num; i++) 
    {
        // Check if 'i' is a divisor of 'num'
        if (num % i == 0) 
	{
            // Add divisors in 'sum'
            sum = sum + i;
        }
    }

    // Check if the number is perfect
    if (sum == num)
    {
        // Display a message if the number is perfect
        printf("Yes, entered number is a perfect number\n");
    }
    else
    {
        // Display a message if the number is not perfect
        printf("No, entered number is not a perfect number\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}

       
