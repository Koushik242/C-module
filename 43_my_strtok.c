/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:05/12/2023
Description:WAP to implement strtok function
Sample input:
Enter the string  : hello;;;;;
Enter the delimeter : ;
Sample output:
Tokens :
hello
*/
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

// Function to tokenize a string based on a delimiter
char *my_strtok(char str[], const char delim[]);

int main()
{
    // Declare character arrays to store the input string and delimiter
    char str[50], delim[50];

    // Prompt user to enter a string
    printf("Enter the string  : ");
    scanf("%s", str);

    // Clear the output buffer (specific to some C libraries)
    __fpurge(stdout);

    // Prompt user to enter a delimiter
    printf("Enter the delimiter : ");
    scanf("\n%s", delim);

    // Clear the output buffer (specific to some C libraries)
    __fpurge(stdout);

    // Tokenize the string using the custom my_strtok function
    char *token = my_strtok(str, delim);

    // Print the resulting tokens
    printf("Tokens :\n");

    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}

// Function definition for custom strtok function
char *my_strtok(char str[], const char delim[])
{
    int j = 0;
    static int i;  // Static variable to maintain the position in the string
    static char *temp;  // Static pointer to traverse the string
    int length = i;  // Variable to store the starting position of the current token

    // If str is not NULL, initialize temp to str
    if (str != NULL)
    {
        temp = str;
    }

    // Iterate through the characters of the string
    while (temp[i] != '\0')
    {
        j = 0;

        // Check for the presence of the current character in the delimiter
        while (delim[j] != '\0')
        {
            // If delimiter is found, replace it with null character and return the token
            if (delim[j] == temp[i])
            {
                temp[i] = '\0';
                i++;

                // Return the token if it is not an empty string
                if (temp[length] != '\0')
                {
                    return (&temp[length]);
                }
                else
                {
                    length = i;
                    i--;
                    break;
                }
            }

            j++;
        }

        i++;
    }

    // Return NULL if the end of the string is reached
    if (temp[length] == '\0')
    {
        return NULL;
    }
    else
    {
        // Return the last token if the end of the string is not reached
        return (&temp[length]);
    }
}

