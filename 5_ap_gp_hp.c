/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:17/10/2023
Description:WAP to generate AP, GP, HP series
Sample input:
Enter the First Number 'A': 3
Enter the Common Difference / Ratio 'R': 5
Enter the number of terms 'N': 6
Sample output:
AP = 3, 8, 13, 18, 23, 28,
GP = 3,15,75,375,1875,9375,
HP = 0.333333,0.125000,0.076923,0.055556,0.043478,0.035714,
*/

#include <stdio.h>

int main()
{
    // Declare variables for the first term (a), common difference/ratio (r), and number of terms (n)
    int a, r, n;

    // Get user input for the first term
    printf("Enter the First Number 'A': ");
    scanf("%d", &a);

    // Get user input for the common difference/ratio
    printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d", &r);

    // Get user input for the number of terms
    printf("Enter the number of terms 'N': ");
    scanf("%d", &n);

    // Check if the number of terms is greater than 0
    if (n > 0)
    {
        // Arithmetic Progression (AP) 
        printf("AP = ");
        for (int i = 0; i < n; i++)
        {
            printf("%d, ", a + i * r);
        }
        printf("\n");

        // Geometric Progression (GP) 
        printf("GP = ");
        int term = a;
        for (int i = 0; i < n; i++)
        {
            printf("%d,", term);
            term = term * r;
        }
        printf("\n");

        // Harmonic Progression (HP) 
        printf("HP = ");
        float res;
        int term_hp = a;
        for (int i = 0; i < n; i++)
        {
            res = 1.0 / term_hp;
            printf("%f,", res);
            term_hp = term_hp + r;
        }
        printf("\n");
    }
    else
    {
        // Display an error message for invalid input
        printf("Invalid input\n");
    }

    return 0;
}

