/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:21/11/2023
Description:WAP to find factorial of given number using recursion
Sample input:
Enter the value of N : 5
Sample output:
Factorial of the given number is 120
*/

# include <stdio.h>
# include <stdlib.h>

int main()

{     
    // variable declaration
 
    static int num, fact = 0;
 
    int status;
    
    // Condition to read and validate the entered number
      
    if (fact == 0) 
    {
           
        printf("Enter the value of N : ");    
        status = scanf("%d", &num); 
        
    // Validation to check if entered number is a positive integer
    if (status != 1 || num < 0)         
    {
          
        printf("Invalid input\n");
              
        return 0;   
      
    }
         
    fact = 1;  
  
    }  
    
    // to calculate factorial recursion     
    if (num)       
    {
   
        fact *= num --;
   
        main();
   
        return fact;
  
     }
  
    //Display the result
  
     printf("Factorial  of the given number is %d\n", fact);
  
     fact = 0;

}
