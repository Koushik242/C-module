/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:02/11/2023
Description:WAP to get 'n' bits from given position of a number
Sample input:
Enter num, n and pos:15 4 3
Sample output:
Result = 7
*/

#include <stdio.h>

// Function prototype
int get_nbits_from_pos(int, int, int);

int main()
{
    // Variable declaration
    int num, n, pos, res = 0;

    // User input
    printf("Enter num, n and pos:");
    scanf("%d%d%d", &num, &n, &pos);

    // Call the function and store the result in 'res'
    res = get_nbits_from_pos(num, n, pos);

    // Print the result
    printf("Result = %d\n", res);

    // Exit the program
    return 0;
}

// Function definition
int get_nbits_from_pos(int num, int n, int pos)
{
    // Extract 'n' bits from position 'pos' in 'num'
    int res = (((1 << pos) - 1) & (num >> (pos - n + 1)));

    // Return the result
    return res;
}

