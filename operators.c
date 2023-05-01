#include<stdio.h>

int main(){
    /*
    operators:
    is a symbol which performs the specific task with operands
    1. arithmetic operator
    2. relational operator
    3. logical operator
    4. assignment operator
    5. increment/decrement operator
    6. conditional operator(ternary operator)


    1. arithmetic operator:
    + , -, /, *, (modulo)%

    2. increment/decrement operator
    increment operator: ++,
    decrement operator:  --
    ++a
    a) a = a + 1
    b) a = a
    a++
    a) a = a
    b) a = a + 1

    y = ++a 
    1. a = a + 1
    2. y = a

    y = a ++
    1. y = a
    2. a = a + 1
    */
   // arithmetic operator:
   int a = 23;
   int b  = 5;
   int sum ;
   sum = a + b;
   int rem = a % b;
   printf("the sum of two number %d and %d is: %d\n", a, b,sum);
   printf("the remainder of two number %d and %d is: %d\n", a, b, rem);


   // increment/decrement operator
   int x = 5;
   int y;
   y = x ++;
   // x = x + 1
   // y = x
   printf("the value of x is: %d\n", x);
   printf("the value of y is: %d\n", y);


    return 0;
}