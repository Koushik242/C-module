/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:22/11/2023
Description:WAP to generate the prime series upto the given limit using functions
Sample input:
Enter a number: 20
Sample output:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>

// Function prototype
int is_prime(int num);
void generate_prime(int limit);

int main() 
{
    int num;

    // Read input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime 
    if (is_prime(num))
    {
        printf("%d\n", num);
    }
    else
    {
        printf("Invalid input\n");
    }

    // Generate prime series up to the given limit
    generate_prime(num);

    return 0;
}

// Function to check whether a number is prime or not
int is_prime(int num) 
{
    if (num <= 1) 
    {
       
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

// Function to generate prime numbers up to the given limit
void generate_prime(int limit)
{
    for (int i = 2; i <= limit; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

