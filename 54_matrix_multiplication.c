/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <stdlib.h>

int matrix_mul(int **mat_a, int rows_a, int cols_a, int **mat_b, int rows_b, int cols_b, int **result);

int main()
{
    int rows_a, cols_a, rows_b, cols_b;

    // Input for matrix A
    printf("Enter number of rows for matrix A: ");
    scanf("%d", &rows_a);
    printf("Enter number of columns for matrix A: ");
    scanf("%d", &cols_a);

    // Allocate memory for matrix A
    int **mat_a = (int **)malloc(rows_a * sizeof(int *));
    for (int i = 0; i < rows_a; i++)
    {
        mat_a[i] = (int *)malloc(cols_a * sizeof(int));
    }

    // Input elements for matrix A
    printf("Enter values for matrix A (%d x %d):\n", rows_a, cols_a);
    for (int i = 0; i < rows_a; i++)
    {
        for (int j = 0; j < cols_a; j++)
       	{
            scanf("%d", &mat_a[i][j]);
        }
    }

    // Input for matrix B
    printf("Enter number of rows for matrix B: ");
    scanf("%d", &rows_b);
    printf("Enter number of columns for matrix B: ");
    scanf("%d", &cols_b);

    // Check if matrix multiplication is possible
    if (cols_a != rows_b)
    {
        printf("Matrix multiplication is not possible.\n");
        return 1; // Exit with an error code
    }

    // Allocate memory for matrix B
    int **mat_b = (int **)malloc(rows_b * sizeof(int *));
    for (int i = 0; i < rows_b; i++) 
    {
        mat_b[i] = (int *)malloc(cols_b * sizeof(int));
    }

    // Input elements for matrix B
    printf("Enter values for matrix B (%d x %d):\n", rows_b, cols_b);
    for (int i = 0; i < rows_b; i++)
    {
        for (int j = 0; j < cols_b; j++) 
	{
            scanf("%d", &mat_b[i][j]);
        }
    }

    // Allocate memory for the result matrix
    int **result = (int **)malloc(rows_a * sizeof(int *));
    for (int i = 0; i < rows_a; i++) 
    {
        result[i] = (int *)malloc(cols_b * sizeof(int));
    }

    // Perform matrix multiplication
    if (matrix_mul(mat_a, rows_a, cols_a, mat_b, rows_b, cols_b, result) == 0) 
    {
        // Display the result matrix
        printf("Product of two matrices:\n");
        for (int i = 0; i < rows_a; i++) 
	{
            for (int j = 0; j < cols_b; j++) 
	    {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error during matrix multiplication.\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows_a; i++) 
    {
        free(mat_a[i]);
    }
    free(mat_a);

    for (int i = 0; i < rows_b; i++)
    {
        free(mat_b[i]);
    }
    free(mat_b);

    for (int i = 0; i < rows_a; i++) 
    
    {
        free(result[i]);
    }
    free(result);

    return 0;
}

int matrix_mul(int **mat_a, int rows_a, int cols_a, int **mat_b, int rows_b, int cols_b, int **result) 
{

    for (int i = 0; i < rows_a; i++)
    {
        for (int j = 0; j < cols_b; j++) 
	{
            result[i][j] = 0;
            for (int k = 0; k < cols_a; k++)
	    {
                result[i][j] += mat_a[i][k] * mat_b[k][j];
            }
        }
    }

    return 0; // Success
}

