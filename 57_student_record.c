/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int Rollno;
    char *name;
    float *marks;
    float average;
    char grade;
};

void calculateAverageAndGrade(struct student *s, int numSubjects) 
{
    s->average = 0;
    for (int i = 0; i < numSubjects; ++i)
    {
        s->average += s->marks[i];
    }
    s->average /= numSubjects;

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

int main()
{
    int numStudents, numSubjects;

    printf("Enter no.of students : ");
    scanf("%d", &numStudents);

    printf("Enter no.of subjects : ");
    scanf("%d", &numSubjects);

    char **subjectNames = (char **)malloc(numSubjects * sizeof(char *));
    for (int i = 0; i < numSubjects; ++i) 
    {
        printf("Enter the name of subject %d : ", i + 1);
        subjectNames[i] = (char *)malloc(50 * sizeof(char));
        scanf("%s", subjectNames[i]);
    }

    struct student *students = (struct student *)malloc(numStudents * sizeof(struct student));

    for (int i = 0; i < numStudents; ++i)
    {
        printf("----------Enter the student details-------------\n");
        printf("Enter the student Roll no. : ");
        scanf("%d", &students[i].Rollno);

        printf("Enter the student %d name : ", i + 1);
        students[i].name = (char *)malloc(50 * sizeof(char));
        scanf("%s", students[i].name);

        students[i].marks = (float *)malloc(numSubjects * sizeof(float));

        for (int j = 0; j < numSubjects; ++j) 
	{
            printf("Enter %s mark : ", subjectNames[j]);
            scanf("%f", &students[i].marks[j]);
        }

        calculateAverageAndGrade(&students[i], numSubjects);
    }

    int choice;

    do
    {
        printf("----Display Menu----\n");
        printf("1. All student details\n");
        printf("2. Particular student details\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        if (choice == 1) 
	{
            printf("\nRoll No.\tName\t");
            for (int j = 0; j < numSubjects; ++j) 
	    {
                printf("%s\t", subjectNames[j]);
            }
            printf("Average\tGrade\n");

            for (int i = 0; i < numStudents; ++i) {
                printf("%d\t\t%s\t", students[i].Rollno, students[i].name);
                for (int j = 0; j < numSubjects; ++j) {
                    printf("%.2f\t", students[i].marks[j]);
                }
                printf("%.2f\t%c\n", students[i].average, students[i].grade);
            }
        } 
	else if (choice == 2) 
	{
            printf("\n----Menu for Particular student----\n");
            printf("1. Name.\n");
            printf("2. Roll no.\n");
            printf("Enter your choice : ");

            int studentIndex;
            scanf("%d", &studentIndex);
            --studentIndex;

            if (studentIndex >= 0 && studentIndex < numStudents) 
	    {
                char name[50];
                printf("Enter the name of the student : ");
                scanf("%s", name);

                if (strcmp(students[studentIndex].name, name) == 0) 
		{
                    printf("\nRoll No.\tName\t");
                    for (int j = 0; j < numSubjects; ++j) 
		    {
                        printf("%s\t", subjectNames[j]);
                    }
                    printf("Average\tGrade\n");

                    printf("%d\t\t%s\t", students[studentIndex].Rollno, students[studentIndex].name);
                    for (int j = 0; j < numSubjects; ++j) 
		    {
                        printf("%.2f\t", students[studentIndex].marks[j]);
                    }
                    printf("%.2f\t%c\n", students[studentIndex].average, students[studentIndex].grade);
                } 
		else
	       	{
                    printf("Student not found.\n");
                }
            } 
	    else
	    {
                printf("Invalid student index.\n");
            }
        }

        printf("Do you want to continue to display(Y/y) : ");
        char contChoice;
        scanf(" %c", &contChoice);
        if (contChoice != 'y' && contChoice != 'Y') 
	{
            break;
        }
    }
    while (1);

    // Free allocated memory
    for (int i = 0; i < numSubjects; ++i)
    {
        free(subjectNames[i]);
    }
    free(subjectNames);

    for (int i = 0; i < numStudents; ++i) 
    {
        free(students[i].name);
        free(students[i].marks);
    }
    free(students);

    return 0;
}

