/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:21/10/2023
Description:WAP to check N th bit is set or not, If yes, clear the M th bit
Sample input:
Enter the number: 19
Enter 'N': 1
Enter 'M': 4
Sample output:
Updated value of num is 3
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int num, N, M, mask = 1;

    // Read input from the user
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter 'N': ");
    scanf("%d", &N);

    printf("Enter 'M': ");
    scanf("%d", &M);

    // Check if the Nth bit is set using bitwise AND
    if (num & (mask << N))
    {
        // If the condition is true, clear the Mth bit using bitwise AND with complement
        num = num & ~(1 << M);

        // Print the updated number
        printf("Updated value of num is %d\n", num);
    }
    else
    {
        // If the condition is false, display the number as it is
        printf("Updated value of num is %d\n", num);
    }

    return 0;
}

