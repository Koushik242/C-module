/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:21/11/2023
Description:WAP to remove duplicate elements in a given array
Sample input:Enter the size: 5

Enter elements into the array: 5 1 3 1 5
Sample output:
After removing duplicates: 5 1 3
*/

#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int new_size);

int main()
{
    // variable declaration
    int size;   
    static int new_size;

    // read size from user
    printf("Enter the size:");
    scanf("%d", &size);        
    int arr1[size], arr2[size];
    // read elements from user
    printf("Enter the elements into the array:");
    for (int i = 0; i < size; i++)     
        scanf("%d", &arr1[i]);

    fun(arr1, size, arr2, new_size);
}

void fun(int *arr1, int size, int *arr2, int new_size)
{
    // to check duplicate elements
    int j, i;
    for (i = 0; i < size; i++)         
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr1[i] == arr1[j])
            {
                arr1[j] = 0;
            }
        }
    }

    for (i = 0; i < size; i++)           
    {
        if (arr1[i] > 0)
        {
            arr2[new_size++] = arr1[i];
        }
    }
    //display the results
    printf("After removing duplicates: ");    
    for (i = 0; i < new_size; i++)         
        printf("%d ", arr2[i]);
}
