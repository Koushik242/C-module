/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:03/11/2023
Description:WAP to toggle 'n' bits from given position of a number
Sample input:
Enter num, n and pos:15 2 2
Sample output:
Result = 9
*/

#include <stdio.h>

// Function prototype
int toggle_nbits_from_pos(int, int, int);

// Main function
int main()
{
    // Declare variables
    int num, n, pos, res = 0;

    // Input values from the user
    printf("Enter num, n and pos:");
    scanf("%d%d%d", &num, &n, &pos);

    // Call the function and store the result in 'res'
    res = toggle_nbits_from_pos(num, n, pos);

    // Display the result
    printf("Result = %d\n", res);
}

// Function definition to toggle 'n' bits from position 'pos'
int toggle_nbits_from_pos(int num, int n, int pos)
{
    // Use bitwise XOR to toggle 'n' bits starting from position 'pos'
    int result = num ^ ~(~0 << n) << (pos - n + 1);

    // Return the result
    return result;
}

