/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototype
void magic_square(int **matrix, int n);

int main()
{
    int n;

    // Input: Get the order of the magic square from the user
    printf("Enter an odd number (n): ");
    scanf("%d", &n);

    // Check if the input is valid (odd and positive)
    if (n % 2 == 0 || n <= 0)
    {
        printf("Error: Please enter only positive odd numbers.\n");
        return 1;
    }

    // Allocate memory for the matrix dynamically
    int **matrix = (int **)calloc(n, sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        matrix[i] = (int *)calloc(n, sizeof(int));
    }

    // Generate the magic square
    magic_square(matrix, n);

    // Output: Print the generated magic square
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%-6d", matrix[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < n; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

// Function to generate the magic square using the Siamese method
void magic_square(int **matrix, int n)
{
    int i, j, num;

    // Initialize starting position
    i = 0;
    j = n / 2;

    // Fill in the matrix with numbers from 1 to n*n
    for (num = 1; num <= n * n; num++)
    {
        matrix[i][j] = num;

        // Calculate the next position
        int next_i = (i - 1 + n) % n;
        int next_j = (j + 1) % n;

        // If the next position is already filled, move down
        if (matrix[next_i][next_j] != 0)
        {
            i += 1;
        }
        // Otherwise, move to the next position
        else
        {
            i = next_i;
            j = next_j;
        }
    }
}

