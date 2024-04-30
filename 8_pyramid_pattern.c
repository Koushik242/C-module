/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:15/10/2023
Description:WAP to print pyramid pattern 
Sample input:
Enter the number: 5
Sample output:
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
*/

#include <stdio.h>

int main() 
{
    // variable declaration
    int row, column, num;

    // taking input from the user
    printf("Enter the number: ");
    scanf("%d", &num);

    // loop for the pattern
    for (row = num; row >= 1; row--) 
    {
        for (column = row; column <= num; column++)
       	{
            printf("%d ", column);
        }

        // move to the next line after each row
        printf("\n");
    }

    // loop for the reverse pattern
    for (row = 2; row <= num; row++)
    {
        for (column = row; column <= num; column++)
       	{
            printf("%d ", column);
        }

        // move to the next line after each row
        printf("\n");
    }

    return 0;
}

