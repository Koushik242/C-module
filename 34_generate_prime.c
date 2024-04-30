/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:22/11/2023
Description:WAP to check whether a given number is prime or not using function.
Sample input:
Enter a number: 47
Sample output:
47 is a prime number
*/

#include <stdio.h>

int is_prime(int num);

int main()
{
    int num;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime using the is_prime function
    if (is_prime(num)) 
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        if (num < 0) 
	{
            printf("Invalid input");
        }
       	else 
	{
            printf("%d is not a prime number\n", num);
        }
    }

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

