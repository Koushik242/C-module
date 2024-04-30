/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

// function name and parameters
int squeeze(char str1[], char str2[]);

int main()
{
    // string declaration
    char str1[50], str2[50];
    
    // read string1 from user
    printf("Enter string1:");
    fgets(str1, 50, stdin);
    
    // read string2 from user
    printf("Enter string2:");
    fgets(str2, 50, stdin);
    
    // function call
    squeeze(str1, str2);
    
    // display the results   
    printf("After squeeze s1 : %s\n", str1);

    return 0;    
}
// function definition
int squeeze(char str1[], char str2[])

{
    // varaible declaration
    int i,j,k;    
    
    for (j=0; str2[j] != '\0';j++)                 
    {
        for (i=k=0; str1[i] != '\0';i++)           
        {
            if (str1[i] != str2[j])                

                str1[k++]=str1[i];                
        }
    str1[k] = '\0';                                
    }
  
}
