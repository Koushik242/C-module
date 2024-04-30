/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:10/12/2023
Description:WAP to print all possible combinations of given string.
Sample input:
Enter a string: abc
Sample output:
All possible combinations of given string :abc
acb
bca
bac
cab
cba
*/

#include <stdio.h> 

// function prototype    
void combination(char *,int ,int );  
// to find length of the string    
int my_strlen(char*);  

int main()
    
{
	// string and varible declaration    
    char str[100];	    
    int n, i;
	// read string from user   
    printf("Enter a string: ");					
	    
    scanf("%100[^\n]",str);	
	    
    n = my_strlen(str);		

	//To check whether unique characters are entered or not...    
    int flag = 0; 
	    
    for ( i = 0; i < n-1; i++ )	    
    {		    
        for (int j = i+1; j < n; j++ )		    
        {			                
            if ( str[i] == str[j] )		        
            {			       
                flag = 1;
			        
                break;			    
            }
		    
        }
	    
    }	    
    if ( flag != 1) //If unique characters entered then calling combination fn...	    
    {	        
        combination(str,0,n-1);	    
    }	    
    else	    
    {		    
        printf("Error: please enter distinct characters.\n");	    
    }	    
    return 0;
    
}
 // to find length of string   
int my_strlen( char *str )
        
{	         
    int length = 0;
            
    while ( *str )	        
    {		        
        length++;
		        
        str++;	        
    }
	        
    return length;       
}
    
void combination ( char *str, int first, int last ) 
        
{
	// varible declaration        
    int fact = 1, i = 1; 
	//First need to find factorial of length of string to print all combinations of the string        
    while ( i <= last+1) 	       
    {		                       
        fact = fact * i;
		        
        i++;	       
    }	        
    i = 0;
	        
    printf("All possible combinations of given string :");
	        
    char temp;
	        
    while ( i < fact )
	            
    {	
        // display the results		
        printf("%s\n", str);

		// To alternatively swap 2 different indexes for each iteration...	           
        if ( i % 2 == 0 ) 	                
        {			                
            temp = str[first+1];
		                    
            str[first+1] = str[last];
			                
            str[last] = temp;		                
        }		            
        else		                
        {			                
            temp = str[first];
			                
            str[first] = str[last];
			                
            str[last] = temp;		                
        }		            
        i++;	            
    }
        
}
