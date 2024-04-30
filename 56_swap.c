/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <string.h>

#define SWAP(t, x, y) do { t temp = x; x = y; y = temp; } while(0)

int main() {
    printf("1. Int\n2. Char\n3. Short\n4. Float\n5. Double\n6. String\nEnter your choice: ");

    int choice;
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            int num1, num2;
            printf("Enter the num1: ");
            scanf("%d", &num1);
            printf("Enter the num2: ");
            scanf("%d", &num2);

            printf("Before Swapping:\nnum1: %d\nnum2: %d\n", num1, num2);

            SWAP(int, num1, num2);

            printf("After Swapping:\nnum1: %d\nnum2: %d\n", num1, num2);
            break;
        }
        case 2: {
            char char1, char2;
            printf("Enter the char1: ");
            scanf(" %c", &char1);
            printf("Enter the char2: ");
            scanf(" %c", &char2);

            printf("Before Swapping:\nchar1: %c\nchar2: %c\n", char1, char2);

            SWAP(char, char1, char2);

            printf("After Swapping:\nchar1: %c\nchar2: %c\n", char1, char2);
            break;
        }
        case 3: {
            short short1, short2;
            printf("Enter the short1: ");
            scanf("%hd", &short1);
            printf("Enter the short2: ");
            scanf("%hd", &short2);

            printf("Before Swapping:\nshort1: %hd\nshort2: %hd\n", short1, short2);

            SWAP(short, short1, short2);

            printf("After Swapping:\nshort1: %hd\nshort2: %hd\n", short1, short2);
            break;
        }
        case 4: {
            float float1, float2;
            printf("Enter the float1: ");
            scanf("%f", &float1);
            printf("Enter the float2: ");
            scanf("%f", &float2);

            printf("Before Swapping:\nfloat1: %.2f\nfloat2: %.2f\n", float1, float2);

            SWAP(float, float1, float2);

            printf("After Swapping:\nfloat1: %.2f\nfloat2: %.2f\n", float1, float2);
            break;
        }
        case 5: {
            double double1, double2;
            printf("Enter the double1: ");
            scanf("%lf", &double1);
            printf("Enter the double2: ");
            scanf("%lf", &double2);

            printf("Before Swapping:\ndouble1: %.2lf\ndouble2: %.2lf\n", double1, double2);

            SWAP(double, double1, double2);

            printf("After Swapping:\ndouble1: %.2lf\ndouble2: %.2lf\n", double1, double2);
            break;
        }
        case 6: {
            char string1[100], string2[100];
            printf("Enter the string1: ");
            scanf("%s", string1);
            printf("Enter the string2: ");
            scanf("%s", string2);

            printf("Before Swapping:\nstring1: %s\nstring2: %s\n", string1, string2);

            SWAP(char *, string1, string2);

            printf("After Swapping:\nstring1: %s\nstring2: %s\n", string1, string2);
            break;
        }
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

