/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:26/10/2023
Description:WAP to replace 'n' bits of a given number
Sample input:
Enter num, n, val:10 3 12
Sample output:
Result= 12
*/
#include <stdio.h>

//Function declaration
int replace_nbits(int, int, int);

int main()
{
    //Declare Variables
    int num, n, val, res = 0;
    
    //User input
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &val);
    
    //Call the function from user
    res = replace_nbits(num, n, val);
    
    //Display result
    printf("Result = %d\n", res);
}
    int replace_nbits(int num, int n, int val)
{
   //Temporary variables
   int x,y; 
   
   //To get the n bits from lsb of value   
   x = val & ((1 << n)-1); 
   
   //To clear the n bit from lsb
   y= num & ~((1 << n)-1);
   
   //Replace y value in x value
   y= y + x;

  return y;
}
