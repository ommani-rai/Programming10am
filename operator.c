#include <stdio.h>
#include <conio.h>

int main()
{
    /*
    operator:
    a + b
    a, b => operand
    + => operator
    types of operator in c:
    1. arithmetic operator
    +, -, *, /, %, ()
    2. Relational operator
        <, >, <=, >=, ==, !=
    3. logical operator
    a)logical and(&&): both condition must be trues
    T T = T
    T F = F
    F T = F
    F F = F

    b) logical or(||):
    if one of the given condition is true then the block of the code will be execute
    T T = T
    T F = T
    F T = T
    F F = F



    c) logical not(!=)
    T = F
    F = T


    4. assignment operator
    =, +=, -=, *=, /=, %=
    5. increment and decrement operator
    ++, --
    int a = 3;
    ++a => a. a = a +1
           b. a = a
    a++ => a. a = a
           b. a = a+1
        example:
           1. y = ++a
                a = a + 1 
                y = a
           2.  y = a++
                y = a
                a = a + 1
    6. comparision/ternary operator
    syntax:
    condition ? when true : when false

    */
    int a = 14;
    int b = 5;
    // Relational operator
    int sum;
    // it carries the difference of two number
    int difference;

    float division;
    // int multiply;
    sum = a + b;
    difference = a - b;
    division = a / b;
    int multiply = a * b;
    int rem = a % b;

    printf("the remainder of %d and %d is %d\n", a, b, rem);
    


    printf("the sum of %d and %d is: %d\n", b, a, sum);
    printf("the difference of %d and %d is %d\n", a, b, difference);
    // printf("the division of %d and %d is %f\n", a, b, division);
    printf("the multiplication of %d and %d is %d\n", a, b, multiply);

    return 0;
    // printf("below the return");
}