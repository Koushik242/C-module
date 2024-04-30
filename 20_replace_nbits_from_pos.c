/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:06/11/2023
Description:WAP to put the (b-a+1) lsb’s of num into val[b:a]
Sample input:
Enter num, a, b, and val:11 3 5 174
Sample output:
Result = 158
*/

#include <stdio.h>

// Function declaration
int replace_nbits_from_pos(int, int, int, int);

// Main function
int main()
{
    // Declare variables 
    int num, a, b, val, res = 0;

    // Prompt the user to enter values for num, a, b, and val
    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);

    // Call the replace_nbits_from_pos function and store the result
    res = replace_nbits_from_pos(num, a, b, val);

    // Display the result
    printf("Result = %d\n", res);

    return 0;
}

// Function to replace n bits in the num from position a with the bits of val
int replace_nbits_from_pos(int num, int a, int b, int val)
{
    // Calculate the result by masking and shifting bits
    int res = ((num & ((1 << a) - 1)) << a) | (val & (~(((1 << a) - 1) << a)));

    return res;
}

