/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:21/10/2023
Description:WAP to find the median of two unsorted arrays
Sample input:Enter the 'n' value for Array A:3
Enter the 'n' value for Array B:3
Enter the elements one by one for Array A:2 3 4
Enter the elements one by one for Array B:3 4 5
Sample output:
Median of array1: 3
Median of array2: 4
Median of both arrays: 3.5
*/

#include <stdio.h>

int main()
{
    // Variable and array declaration
    int a, b, temp, x1, x2, index1, index2;
    int arr1[50];
    int arr2[50];
    float median1, median2, median;

    // Input for Array A
    printf("Enter the 'n' value for Array A:");
    scanf("%d", &a);

    // Input for Array B
    printf("Enter the 'n' value for Array B:");
    scanf("%d", &b);

    // Input elements for Array A
    printf("Enter the elements one by one for Array A:");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input elements for Array B
    printf("Enter the elements one by one for Array B:");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Sorting Arrays using the Bubble Sort method
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < b - 1; i++)
    {
        for (int j = 0; j < b - i - 1; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    // Finding the median1 of the sorted array A
    if (a % 2 == 0)
    {
        x1 = (a - 1) / 2;
        x2 = (a / 2);
        median1 = (arr1[x1] + arr1[x2]) * 0.5;
    }
    else
    {
        x1 = (a / 2);
        median1 = arr1[x1];
    }

    // Finding the median2 of the sorted array B
    if (b % 2 == 0)
    {
        index1 = (b - 1) / 2;
        index2 = (b / 2);
        median2 = (arr2[index1] + arr2[index2]) * 0.5;
    }
    else
    {
        index1 = (b / 2);
        median2 = arr2[index1];
    }

    // Printing the medians of array A and array B
    printf("Median of array1: %g\n", median1);
    printf("Median of array2: %g\n", median2);

    // Finding the median of both arrays
    median = (median1 + median2) * 0.5;
    printf("Median of both arrays: %g\n", median);

    return 0;
}

