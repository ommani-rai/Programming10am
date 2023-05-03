#include <stdio.h>

int main()
{
    /*
    format specifier:
    int: %d
    float: %f
    char: %c


    types of operator:
    1. arithmetic operator
    2. relational operator
    3. logical operator
    4. assignment operator
    5. conditional/ternary operator
    6. increment/decrement operator

    int a = 23;
    int b = 34;

    int sum;
    sum = a + b;
    + -> operator
    a, b -> operand

    1. arithmetic operator
    =>   + , -, /, *, remainder(modulo operator)%


    2. relational operator
    <, <=, >, >= , !=(not equalls to)

    3. Logical operator
        a) && (logical and )
        a= 5
        b = 6
        a && b:

        a  b    (a>12 && b<23)
        T  T      T
        T   F     F
        F   T     F
        F   F     F


        b) || (logical or)
        a   b    (a>12 || b<23)
        T   T     T
        T   F     T
        F   T     T
        F   F     F



        c) ! (logical not)

        a   !a
        T   F
        F   T



    */
    int a = 34;
    int b = 34;
    int sum = a + b;
    int rem = a % b;

    // printf("the sum of two number %d and %d is: %d\n", a, b, sum);
    // printf("the remainder of two number %d and %d is: %d\n", a, b, rem);
    // logical not
    if (a != b)
    {
        printf("a is greater than b\n");
    }
    // logical and
    if (a > 12 && b > 23) // T && T => result: T
    {
        printf("if both condition is true\n");
    }
    // logical or
    if (a > 12 || b < 23) // T || F => result: T
    {
        printf("if one of the given condition is  true\n");
    }
    // logical not
    if(a != 34){
        printf("a is equalls to 34\n");
    }

    return 0;
}