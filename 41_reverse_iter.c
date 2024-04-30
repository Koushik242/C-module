/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:27/11/2023
Description:WAP to reverse the given string using iterative method
Sample input:
Enter a string : EMERTXE
Sample output:
Reverse string is : EXTREME
*/

#include <stdio.h>
#include <string.h>

// function implementation
void reverse_iterative(char str[])
{
  int len = strlen(str);
  char temp;
  for (int i = 0; i < len / 2; i++)
  {
    temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
}

int main()
{
  char str[30];

  printf("Enter any string : ");
  scanf("%[^\n]", str);

  // calling function
  reverse_iterative(str);

  printf("Reversed string is: %s\n", str);

  return 0;
}

