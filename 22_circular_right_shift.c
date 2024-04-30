/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:09/11/2023
Description:WAP to implement Circular right shift
Sample input:Enter num: 12
Enter n : 3
Sample output:
Enter num: 12
Enter n : 3
Result : 10000000 00000000 00000000 00000001
*/

#include <stdio.h>

// Function prototypes
int circular_right(int, int);
int print_bits(int);

// Main function
int main()
{
    int num, n, ret;
    
    // Read input from the user
    printf("Enter the num:");
    scanf("%d", &num);
    
    printf("Enter n:");
    scanf("%d", &n);
    
    // Call the circular_right function and store the result
    ret = circular_right(num, n);
    
    // Display the result
    printf("Result:");
    print_bits(ret);
}

// Function to perform circular right shift on a number
int circular_right(int num, int n)
{ 
    // Convert num to an unsigned integer to handle negative numbers correctly
    unsigned a = num;
  
    // Perform circular right shift and return the result
    return (num >> n) & (~(((1 << n) - 1) << (31 - n + 1))) | (a & ((1 << n) - 1)) << (31 - n + 1);
}     

i// Function to print the binary representation of an integer
int print_bits(int ret)
{     
    // Loop through each bit and print 1 or 0
    for (int i = 0; i < 32; i++)
    {
        if ((ret >> (31 - i)) & 1)
	{
            printf(" 1");
	}
        else
	{
            printf(" 0");
	}

    }
    printf("\n");
}

