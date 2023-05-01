#include <stdio.h>

int main()
{

    /*
    types of data types in c:
    1. primary data types
        a. int
        b. float
        c. char
    2. derived data types
        a. function
        b. arrary
        c. pointer
    3. user defined data types
        a. structure
        b. union
        c. enumeration


    format specifier:
    int: %d
    float: %f
    char: %c
    */
    // int data types
    int num1;
    num1 = 23;
    int num2 = num1;
    float a = 12.34;
    char b = 's';

    int sum = num1 + num2;
    // difference, multiply
    printf("the sum of num1 and num2 is: %d\n", sum);
    printf("the value of a is: %.3f\n", a);
    printf("the value of b is: %c\n", b);

    printf("hello world");
    return 0;
}