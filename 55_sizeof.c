/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

#define SIZEOF(type) ((char*)(&type + 1) - (char*)(&type))

int main()

{

    int x;
    char y;
    float z;
    double w;
    unsigned int u;
    long int l;
    

    printf("Size of int : %ld bytes\n", SIZEOF(x));
    printf("Size of char : %ld bytes\n", SIZEOF(y));
    printf("Size of float : %ld bytes\n", SIZEOF(z));
    printf("Size of double : %ld bytes\n", SIZEOF(w));
    printf("Size of unsigned int : %ld bytes\n", SIZEOF(u));
    printf("Size of long int : %ld bytes\n", SIZEOF(l));

    return 0;
}
