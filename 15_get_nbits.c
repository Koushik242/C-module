/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:26/10/2023
Description:WAP to get 'n' bits of a given number
Sample input:
Enter num and n:15 2
Sample output:
result=3
*/

#include <stdio.h>

// Function declaration
int get_nbits(int, int);

int main()
{
    // Variables declaration
    int num, n, res = 0;

    // User input
    printf("Enter num and n:");
    scanf("%d%d", &num, &n);

    // Call the function and store the result
    res = get_nbits(num, n);

    // Display the result
    printf("Result = %d\n", res);
    
}

// Function definition
int get_nbits(int num, int n)
{
    // Use bitwise AND to get n bits from the right
    int res = (num & ((1 << n) - 1));
    return res;
}

