#include <stdio.h>
// int sum();
/*
types of function according to return value and passing arguments
1. function return value and passing  arguments
2. funciton return value and passing no arguments
3. function return no value and passing arguments
4. function return no value and passing no arguments

argument: actual value
parameter

*/
// int sum(){
//     int a = 23;
//     int b = 2;
//     int sum = a + b;
//     // printf("the sum of number %d and %d is: %d", a, b, sum);
//     return sum;
// }

// function return value and passing arguments
int sum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

// function return no value and passing arguments
int next_sum(int a, int b)
{
    int sum;
    sum = a + b;
    printf("the sum is: %d", sum);
}

// function return no value and passing no argumnets
int diff()
{
    int a;
    int b;
    printf("enter the first number\n");
    scanf("%d", &a);
    printf("enter the  number\n");
    scanf("%d", &b);
    int diff = a - b;
    printf("the difference of number %d and %d is: %d", a, b, diff);
}

// function return value and passing no argumnets
int div()
{
    int a;
    int b;
    printf("enter the first number\n");
    scanf("%d", &a);
    printf("enter the second number\n");
    scanf("%d", &b);
    int div = a - b;
    return div;
}

void welcome()
{
    printf("welcome to Vedu!");
}

int main()
{
    // int s = sum(12, 12);
    // int z = sum(24, 24);
    // printf("sum is: %d\n", s);
    // printf("sum is: %d\n", z);
    diff();
    // welcome();

    return 0;
}