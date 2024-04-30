/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:21/10/2023
Description:WAP to check whether a given number is prime or not.
Sample input:
Enter a number: 5
Sample output:
5 is a prime number
*/

#include <stdio.h>

int main()
{
    int num, isPrime = 1;

    // Read the number from the user
  //  printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num < 2)
    {
        printf("Invalid input\n");
    }
    else
    {
        // Loop to check if the number is prime
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        // Print the result based on isPrime value
        if (isPrime)
        {
            printf("%d is a prime number\n", num);
        }
        else
        {
            printf("%d is not a prime number\n", num);
        }
    }

    return 0;
}


