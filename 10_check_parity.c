/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:19/10/2023
Description:
Sample input:
Enter the number:3
Sample output:
Number of set bits = 2
Bit parity is even
*/

#include <stdio.h>

int main()
{
    // Initialize variables
    int count = 0, num;

    // Prompt the user to enter a number
    printf("Enter the number:");

    // Read the number from the user
    scanf("%d", &num);

    // Iterate through each bit of the binary representation (assuming a 32-bit integer)
    for (int i = 0; i < 32; i++)
    {
        // Check if the i-th bit is set (1)
        if (num >> i & 1)
        {
            // Increment the count if the bit is set
            count++;
        }
    }

    // Print the total number of set bits
    printf("Number of set bits = %d\n", count);

    // Check if the count of set bits is odd or even
    if (count & 1)
    {
        // If count is odd, print that bit parity is odd
        printf("Bit parity is odd\n");
    }
    else
    {
        // If count is even, print that bit parity is even
        printf("Bit parity is even\n");
    }

    return 0;
}

