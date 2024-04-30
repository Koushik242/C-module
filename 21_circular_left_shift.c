/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:09/11/2023
Description: WAP to implement Circular left shift
Sample input:
Enter num: 12
Enter n : 3
Sample output:
Enter num: 12
Enter n : 3
Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
*/

#include <stdio.h>

// Function prototypes
int circular_left(int, int);
int print_bits(int);

int main()
{
    // Variable declarations
    int num, n, ret;

    // User input for the number to be shifted
    printf("Enter the num:");
    scanf("%d", &num);

    // User input for the number of positions to shift
    printf("Enter n:");
    scanf("%d", &n);

    // Perform circular left shift and store the result
    ret = circular_left(num, n);

    // Print the result in binary
    printf("Result in Binary:");
    print_bits(ret);
}

// Function to perform circular left shift
int circular_left(int num, int n)
{
    // Convert num to an unsigned integer to handle shifting issues
    unsigned int a = num;

    // Perform circular left shift operation
    return (num << n) | (a >> (32 - n));
}

// Function to print the binary representation of an integer
int print_bits(int ret)
{
    // Iterate over each bit of the integer (assuming 32-bit integer)
    for (int i = 31; i >= 0; i--)
    {
        // Check if the current bit is set (1) or not set (0)
        if (ret & (1 << i))
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
    printf("\n");
}

