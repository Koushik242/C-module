/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:24/12/2023
Description:Provide a menu to manipulate or display the value of variable of type t
Sample input:
Sample output:
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
-------------------------
0 -> k
-------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 1
Enter the int : 10
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
------------------------
0 -> k (char)
1 -> 10 (int)
------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 2
0 -> k
1 -> 10
Enter the index value to be deleted : 0
index 0 successfully deleted.
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 4
*/

#include <stdio.h>
#include <stdlib.h>

// Function to manipulate the array based on user input
void manipulateArray(void *dataArray) 
{
    // Flags to track the presence of different data types in the array
    static int charFlag1 = 0, charFlag2 = 0, intFlag = 0, floatFlag = 0, doubleFlag = 0, shortFlag = 0;

    // Menu for user options
    printf("1. Add element\n");
    printf("2. Remove element\n");
    printf("3. Display element\n");
    printf("4. Exit from program\n");

    int option1, option2;
    printf("Enter your choice --->");
    scanf("%d", &option1);

    switch (option1) 
    {
        case 1:
            // Add element menu
            printf("1. int\n");
            printf("2. char\n");
            printf("3. float\n");
            printf("4. double\n");
            printf("5. short\n");
            printf("Enter your choice --->");
            scanf("%d", &option2);

            switch (option2) 
	    {
                case 1:
                    // Adding integer to the array
                    if (floatFlag == 0 && intFlag == 0 && doubleFlag == 0) 
		    {
                        printf("Enter the integer: ");
                        scanf("%d", (int *)(dataArray + 4));
                        intFlag = 1;
                    } 
		    else
		    {
                        printf("Not enough space to store integer\n");
                    }
                    break;
                case 2:
                    // Adding character to the array
                    if (charFlag1 == 0 && doubleFlag == 0) 
		    {
                        printf("Enter the character: ");
                        scanf(" %c", (char *)dataArray);
                        charFlag1 = 1;
                    }
		    else if (charFlag2 == 0 && doubleFlag == 0) 
		    {
                        printf("Enter the character: ");
                        scanf(" %c", (char *)(dataArray + 1));
                        charFlag2 = 1;
                    }
		    else
		    {
                        printf("Not enough space to store character\n");
                    }
                    break;
                case 3:
                    // Adding float to the array
                    if (floatFlag == 0 && intFlag == 0 && doubleFlag == 0) 
		    {
                        printf("Enter the float: ");
                        scanf("%f", (float *)(dataArray + 4));
                        floatFlag = 1;
                    } else {
                        printf("Not enough space to store float\n");
                    }
                    break;
                case 4:
                    // Adding double to the array
                    if (intFlag == 0 && charFlag1 == 0 && charFlag2 == 0 && shortFlag == 0 && floatFlag == 0)
		    {
                        printf("Enter the double: ");
                        scanf("%lf", (double *)dataArray);
                        doubleFlag = 1;
                    }
		    else
		    {
                        printf("Not enough space to store double\n");
                    }
                    break;
                case 5:
                    // Adding short to the array
                    if (doubleFlag == 0 && shortFlag == 0) 
		    {
                        printf("Enter the short: ");
                        scanf("%hi", (short *)(dataArray + 2));
                        shortFlag = 1;
                    }
		    else
		    {
                        printf("Not enough space to store short\n");
                    }
                    break;
            }
            // Recursive call to continue manipulation
            manipulateArray(dataArray);
            break;
        case 2:
            // Remove element menu
            if (charFlag1 == 1 || charFlag2 == 1 || intFlag == 1 || floatFlag == 1 || shortFlag == 1 || doubleFlag == 1)
	    {
                // Displaying and removing selected elements
                if (charFlag1 == 1) 
		{
                    printf("%d -> %c\n", 0, *((char *)dataArray));
                }
                if (charFlag2 == 1) 
		{
                    printf("%d -> %c\n", 1, *((char *)(dataArray + 1)));
                }
                if (intFlag == 1)
	       	{
                    printf("%d -> %d\n", 4, *((int *)(dataArray + 4)));
                }
                if (floatFlag == 1)
	       	{
                    printf("%d -> %f\n", 4, *((float *)(dataArray + 4)));
                }
                if (shortFlag == 1) 
		{
                    printf("%d -> %hi\n", 2, *((short *)(dataArray + 2)));
                }
                if (doubleFlag == 1) 
		{
                    printf("%d -> %g\n", 0, *((double *)dataArray));
                }

                // Asking the user for the index value to be deleted
                int index;
                printf("Enter the index value to be deleted: ");
                scanf("%d", &index);

                // Removing elements based on the index
                if (index < 1) 
		{
                    charFlag1 = 0;
                    doubleFlag = 0;
                    printf("%d successfully deleted\n", index);
                }
	       	else if (index < 2)
	       	{
                    charFlag2 = 0;
                    printf("%d successfully deleted\n", index);
                }
	       	else if (index < 4)       
		{
                    shortFlag = 0;
                    printf("%d successfully deleted\n", index);
                } 
		
		else if (index < 8)
	       	{
                    intFlag = 0;
                    floatFlag = 0;
                    printf("%d successfully deleted\n", index);
                }
            } 
	    else
	    {
                printf("No values to be removed\n");
            }
            // Recursive call to continue manipulation
            manipulateArray(dataArray);
            break;
        case 3:
            // Display element menu
            if (charFlag1 == 1 || charFlag2 == 1 || intFlag == 1 || shortFlag == 1 || doubleFlag == 1) 
	    {
                // Displaying the elements present in the array
                printf("---------------------------------------\n");
                if (charFlag1 == 1) 
		{
                    printf("%d -> %c(char)\n", 0, *((char *)dataArray));
                }
                if (charFlag2 == 1) 
		{
                    printf("%d -> %c(char)\n", 1, *((char *)(dataArray + 1)));
                }
                if (intFlag == 1) 
		{
                    printf("%d -> %d(int)\n", 4, *((int *)(dataArray + 4)));
                }
                if (floatFlag == 1) 
		{
                    printf("%d -> %f(float)\n", 4, *((float *)(dataArray + 4)));
                }
                if (shortFlag == 1) 
		{
                    printf("%d -> %hi(short)\n", 2, *((short *)(dataArray + 2)));
                }
                if (doubleFlag == 1) 
		{
                    printf("%d -> %g(double)\n", 0, *((double *)dataArray));
                }
                printf("----------------------\n");
            } 
	    else
	    {
                printf("No values for displaying\n");
            }
            // Recursive call to continue manipulation
            manipulateArray(dataArray);
            break;
        case 4:
            // Freeing allocated memory and exiting the program
            free(dataArray);
            exit(0);
    }
}

int main() 
{
    // Allocating memory for the array
    void *dataArray = malloc(8);
    manipulateArray(dataArray);
    free(dataArray);
    return 0;
}

