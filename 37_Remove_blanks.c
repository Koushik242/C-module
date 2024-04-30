/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <string.h>

void replace_blank(char[]);
int mystrlen(char *);

int main()
{
    char str[100];

    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);

    replace_blank(str);

    printf("%s\n", str);

    return 0;
}

int mystrlen(char *str)
{
    int i;
    for ( i = 0; str[i] != '\0'; i++)
    {
    }
    return i;
}

void replace_blank(char str[])
{
    int len = mystrlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            while (str[i + 1] == ' ')
            {
                for (int j = i; j < len; j++)
                {
                    str[j] = str[j + 1];
                }
                len--;
            }
        }
    }
}

