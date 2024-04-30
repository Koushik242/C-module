/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:17/11/2023
Description:WAP to find 2nd largest element in an array
Sample input:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Sample output:
Second largest element of the array is 5
*/

#include <stdio.h>

int sec_largest(int [], int);

int main()
{
    int size, ret;

    // Read size from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Read elements into the array
    printf("Enter %d elements into the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Function call
    ret = sec_largest(arr, size);

    printf("Second largest element of the array is %d\n", ret);

    return 0;
}

// Function implementation
int sec_largest(int arr[], int size)
{
    int first, second;

    // Initialize first and second based on the first two elements of the array
    if (arr[0] > arr[1])
    {
        first = arr[0];
        second = arr[1];
    }
    else 
    {
        first = arr[1];
        second = arr[0];
    }

    // Iterate from the third element to the end of the array
    for (int i = 2; i < size; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }

    return second;
}

