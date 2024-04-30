/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/
#include<stdio.h>

void sorted_array(int *ptr,int size)
{
    // variable declaration
    int i,j,temp1,temp2= -99999999;
    
    // display the sorting 
    printf("After sorting:");
    for(i=0;i<size;i++)
    {
        temp1=999999999;
        for(j=0;j<size;j++)
        {
            if(*(ptr+j) < temp1 && *(ptr+j) > temp2)
            {
                temp1= *(ptr+j);
            }
        }
       // printing elements in sorted array
        printf(" %d",temp1);
        temp2=temp1; // small elements find
    }

}

int main()
{
    // variable declaration
    int size,i;
    
    // read size from user
    printf("Enter the array: ");
    scanf("%d",&size);
    
    // array into size
    int array[size];
    
    // enter the elements 
    printf("Enter %d elements\n",size);
    for(i=0;i<size;i++)
    {

        scanf("%d", &array[i]);
    } 
    
    // function call
    sorted_array(array,size);
    
    // display the results
    printf("\nOriginal array values");
    for(i=0;i<size;i++)
    {

        printf(" %d", array[i]);
    }

    printf("\n");
    
    return 0;
}
