/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:03/12/2023
Description:WAP to count no. of characters, words and lines, entered through stdin
Sample input:
Hello world
Dennis Ritchie
Linux
Sample output:
Character count : 33
Line count : 3
Word count : 5
*/

#include<stdio.h>

int main()
{
    // varible declaration
    char option;
    int line_count = 0, word_count = 1, char_count = 0;

    // new line increment line and word count
    char ch, temp = 'a';
    while((ch = getchar()) != EOF)
    {
        if(ch == '\n')
        {
            line_count++;
            word_count++;

            if(temp == ch) // if next character is newline decrement the word count
            {
                word_count--;
            }
            temp = ch;
        }
        else
        {
            if(ch == ' ' || ch == '\t')
            {
                word_count++;

                if(temp == ch)
                {
                    word_count--;
                }
            }
            temp = ch;
        }
        char_count++;
    }
    // if EOF ctrl+d break the loop
    if(ch == EOF && temp == '\n')
    {
        word_count--;
    }
    // display the results
    printf("character count = %d\n", char_count);
    printf("line_count = %d\n", line_count);
    printf("word_count = %d\n", word_count);

    return 0;
}
