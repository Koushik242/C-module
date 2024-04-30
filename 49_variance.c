/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/
#include <stdio.h>
#include <stdlib.h>
float calculate_mean(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return (float)sum / size;
}

float variance(int * arr, int size)
{
  float mean = calculate_mean(arr, size);
    float sum_of_squares = 0;

    for (int i = 0; i < size; i++) {
        float difference = arr[i] - mean;
        sum_of_squares += difference * difference;
    }

    return sum_of_squares / size;  
}

int main()
{
    int size;
    printf("Enter the size\n");
    scanf("%d",&size);
    int*arr=malloc(sizeof (int)*size);
    for(int i=0; i < size; i++)
    {
      scanf("%d",&arr[i]);
    }
    // Calculate the variance
    float result_variance = variance(arr, size);

    // Display the result
    printf("Variance is %.6f\n", result_variance);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
