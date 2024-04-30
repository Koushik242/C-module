/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:17/11/2023
Description:WAP to find 3rd largest element in an array
Sample input:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Sample output:
Third largest element of the array is 4
*/

#include <stdio.h>

// Function declaration
int third_largest(int arr[], int size);

int main()
{
    int size, ret;

    // Read size from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Read elements into the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Function call
    ret = third_largest(arr, size);

    // Print the result
    printf("Third largest element of the array is %d\n", ret);

    return 0; // indicate successful execution
}


// Function definition
int third_largest(int arr[], int size)
{
    
    int first, second, third;
    first = second = third = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > first)
       	{
            third = second;
            second = first;
            first = arr[i];
        }
       	else if (arr[i] > second)
       	{
            third = second;
            second = arr[i];
        }
       	else if (arr[i] > third)
       	{
            third = arr[i];
        }
    }

    return third;
}

