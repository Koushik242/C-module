/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:13/10/2023
Description:WAP to print the numbers in X format as shown below
Sample input:
Enter number:10
Sample output:
1                 10
  2             9
    3         8
      4     7
        5 6
        5 6
      4     7
    3         8
  2             9
1                 10
*/

#include <stdio.h>

int main()
{
    // Declare a variable
    int n;

    // Prompt user to enter a number
    printf("Enter number:");
    scanf("%d", &n);

    // Initialize variables 
    int a = 1, b = n;

    // Loop to iterate through rows
    for (int i = 1; i <= n; i++)
    {
        // Loop to iterate through columns
        for (int j = 1; j <= n; j++)
        {
            // Check if the current column is at position 'a' or 'b'
            if (j == a || j == b)
            {
                // Print the column number
                printf("%d ", j);
            }
            else
            {
                // Print space if the column is not at position 'a' or 'b'
                printf("  ");
            }
        }

        // Increment 'a' to move to the next position
        a++;

        // Decrement 'b' to move to the next position
        b--;

        // Move to the next line after printing each row
        printf("\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}


