/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:17/10/2023
Description:WAP to find which day of the year
Sample input:
Enter the value of 'n' : 6
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 7
Sample output:
The day is Thursday
*/

#include <stdio.h>

int main()
{
    int n, day;

    // Get the number of days 'n' from the user
    printf("Enter the value of 'n': ");
    scanf("%d", &n);

    {
        // Check if 'n' is in the valid range (1 to 365)
        if (n > 0 && n <= 365) 
	{

            // Prompt the user to choose the first day of the week
            printf("Choose First Day:\n 1. Sunday \n 2. Monday \n 3. Tuesday \n 4. Wednesday \n 5. Thursday\n 6. Friday\n 7. Saturday\n");
            printf("Enter the option to set the first day: ");
            scanf("%d", &day);

            // Check if the chosen day is in the valid range (1 to 7)
            if (day > 0 && day <= 7) 
	    {

                // Calculate the day of the week after 'n' days
                if ((day + n - 1) % 7 == 0)
                    day = 7;
                else
                    day = ((day + n - 1) % 7);

                // Display the day of the week using a switch statement
                switch (day) 
		{
                    case 1:
                        printf("The day is Sunday\n");
                        break;

                    case 2:
                        printf("The day is Monday\n");
                        break;

                    case 3:
                        printf("The day is Tuesday\n");
                        break;

                    case 4:
                        printf("The day is Wednesday\n");
                        break;

                    case 5:
                        printf("The day is Thursday\n");
                        break;

                    case 6:
                        printf("The day is Friday\n");
                        break;

                    case 7:
                        printf("The day is Saturday\n");
                        break;
                }
            } 
	    else 
	    {
                // Display an error message for an invalid day
                printf("Error: Invalid input, first day should be > 0 and <= 7\n");
            }
        } 
	else 
	{
            // Display an error message for an invalid 'n' value
            printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
        }
    }

    return 0;
}

