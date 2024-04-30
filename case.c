/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int main()
{
    int grade;
    scanf("%d",&grade);

    switch (grade / 100) 
    {
        
        case 90:
            printf("Grade A");
            break;
        case 80:
            grade = 'B';
            break;
        case 70:
            grade = 'C';
            break;
        case 60:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }

    return 0;
}

