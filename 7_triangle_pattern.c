/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:15/10/2023
Description:WAP to print triangle pattern
Sample input:
Enter the number: 5
Sample output:
1 2 3 4 5
6       7
8    9
10 11
12
*/

#include<stdio.h>

int main() 
{
    // variable declaration
    int row, col, num, tri = 1;

    // taking input from the user
    printf("Enter the number: ");
    scanf("%d", &num);

    // outer loop for rows
    for (row = 1; row <= num; row++) 
    {

        // inner loop for columns
        for (col = 1; col <= num; col++) 
	{

            // condition to print numbers or spaces
            if (row == 1 || col == 1 || row == num - col + 1) 
	    {
                printf("%d ", tri++);
            }

	    else if (row > num - col + 1) 
	    {
                // print a space
                printf(" ");
            } 

	    else
	    {
                // print two spaces
                printf("  ");
            }
        }

        // move to the next line after each row
        printf("\n");
    }

    return 0;
}

