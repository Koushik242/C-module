/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:03/12/2023
Description:WAP to implement atoi function
Sample input:
Enter a numeric string: 12345
Sample output:
String to integer is 12345
*/

#include <stdio.h>
#include <string.h>

int my_atoi(const char str[]);
int main()
{   
    // string declration 
    char str[20];
    
    // read string from user
    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    // display the results
    printf("String to integer is %d\n", my_atoi(str));

    return 0;
}

int my_atoi(const char*str)

{   
    // varible declaration  
    int sign = 1, base = 0, i = 0,num=0;
    
    // to skip the space charcter
    while (str[i] == ' ')    
    {
        i++;   
    }
    
    // intialize sign value to find str +ve or -ve
    if (str[i] == '+' || str[i] == '-')
    {    
        if(str[i] == '-')
        {
            sign= -1;
        }       
        i++;   
    }
    
    // run loop to end of the string
    // to check non zero numeric
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {       
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return sign * num;

}
