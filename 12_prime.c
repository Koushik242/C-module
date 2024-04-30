/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:21/10/2023
Description:WAP to print all primes using Sieve of Eratosthenes method
Sample input:
Enter the value of 'n': 25
Sample output:
The primes less than or equal to 25 are: 2, 3, 5, 7, 11, 13, 17, 19, 23,
*/

#include <stdio.h>

int main()
{
    int num, i;

    // Read input from the user
    printf("Enter the value of 'n': ");
    scanf("%d", &num);

    if (num > 1)
    {
        int prime[num + 1];

        // Initialize prime array with values from 1 to num
        for (int i = 1; i <= num; i++)
        {
            if (prime[num + 1])
                prime[i] = i;
        }

        // Use the Sieve of Eratosthenes algorithm to mark multiples of primes as -1
        for (int i = 2; i * i <= num; i++)
        {
            if (prime[i] != -1)
            {
                for (int j = 2 * i; j <= num; j += i)
                    prime[j] = -1;
            }
        }

        // Print the primes less than or equal to num
        printf("The primes less than or equal to %d are: ", num);
        for (int i = 2; i <= num; i++)
        {
            if (prime[i] != -1)
            {
                printf("%d, ", i);
            }
        }
    }
    else
    {
        printf("Please enter a positive number greater than 1\n");
    }

    return 0;
}

