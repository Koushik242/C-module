/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <stdlib.h>

struct student
{
    int Rollno;
    char *name;
    float *marks;
    float average;
    char grade;
};

int main()
{

    if (s->average >= 90) 
    {
        s->grade = 'A';
    } 
    else if (s->average >= 80) 
    {
        s->grade = 'B';
    } 
    else if (s->average >= 70) 
    {
        s->grade = 'C';
    } 
    else if (s->average >= 60)
    {
        s->grade = 'D';
    } 
    else
    {
        s->grade = 'F';
    }
}

