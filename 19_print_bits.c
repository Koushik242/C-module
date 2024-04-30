/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:06/11/2023
Description:WAP to print 'n' bits from LSB of a number
Sample input:
Enter num, n :15 4
Sample output:
Binary form of 1111
*/

#include <stdio.h>

// Function declaration
int print_bits(int, int);

int main()
{
    // Declare variables 
    int num, n;

    // Prompt the user to enter values for num and n
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);

    // Display the binary form of num up to n bits
    printf("Binary form of %d:", num);

    // Call the print_bits function to print the binary representation
    print_bits(num, n);

    return 0;
}

// Function to print binary representation of a number up to n bits
int print_bits(int num, int n)
{
    // Loop through each bit position from MSB to LSB
    for (int i = n - 1; i >= 0; i--)
    {
        // Check if the current bit is set (1) or unset (0)
        if (1 << i & num)
        {
            // Print "1" if the bit is set
            printf("1 ");
        }
        else
        {
            // Print "0" if the bit is unset
            printf("0 ");
        }
    }

    printf("\n");
}

