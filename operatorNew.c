#include<stdio.h>

int main(){
    /*
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
    
    */ 
   int a = 34;
   int b = 12;
   int sum = a + b;
   int rem = a % b;

   printf("the sum of two number %d and %d is: %d\n",a,b, sum);
   printf("the remainder of two number %d and %d is: %d\n", a, b, rem);

    return 0;
}