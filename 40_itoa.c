/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:03/12/2023
Description:WAP to implement itoa function
Sample input:
Enter the number : 1234
Sample output:
Integer to string is 1234
*/

#include<stdio.h>

// function prototype
int itoa(int num, char *str); 
    
int main()        
{
    // var declaration         
    int num,ret;         
    // string declaration        
    char str[10];   
    
    // read num from user            
    printf("Enter the number:");            
    ret = scanf("%d", &num);
    
    //function call            
    itoa(num, str);
	
    // display the results        
    if(ret == 0)	            
    {    	            
        printf("Integer to string is %d\n", ret);	            
    }	        
    else	            
    {                   
        printf("Integer to string is %s\n", str);	            
    }
        
}
//function definition    
int itoa(int num, char *ptr)   
        
{
    // varaible declaration            
    int rev = 0, mod, var, mod1, num1;
            
    num1 = num;
            
    if (num < 0)                
    {                    
        *ptr = '-' + 0;                    
        num = -num;                    
        ptr++;                
    }                
    // iter witha num digit by digit
    while (num > 0)                   
    {                            
        mod = num % 10;                        
        rev = (rev * 10) + mod;                        
        num = num / 10;                    
    }                
    while (rev > 0)                    
    {                        
        var = rev % 10;                        
        var = var + '0';                        
        *ptr = var;                        
        ptr++;

        rev = rev / 10;                    
    }
                 
    while (num1)                    
    {                        
        mod1 = num1 % 10;
            
        if (mod1 == 0)                    
        {                        
            *ptr = 0 + '0';
                         
            ptr++;                    
        }            
        else
            
            break;
            
        num1 = num1 / 10;        
    }         
    //After all copying of the characters adding \0 to the end of the string.
    *ptr = '\0';  
}
