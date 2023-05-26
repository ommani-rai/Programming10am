#include <stdio.h>

int main()
{
    /*
    // initialization
    do{
        // increment/decrement
    }
    while(condition)

    */
    /*
    1. sum of natural number
    sum =0;
    sum += i;
    2. factorial of the given number: 3=> 3 * 2 * 1 (0! => 1)
    factorial of n=> n * (n-1) * (n-2)
    fac = 1;
    for(i=1; i<=5; i++){
    fac *= i;
    }
    3. fibonacci series
    0 1 1 2 3 5 8 13 21 34 55
    a = 0;
    b = 1;
    c = a + b; // 1
    a = b; // 1
    b = c; // 1
    c = a + b; // 1 + 1 = 2
    a = b // 1
    b = c // 2
    c = a + b // 1 + 2 = 3

    */

    int a = 2;
    do
    {
        a++;
    }
    while (a < 10);
    printf("the value of a is %d\n", a);

    return 0;
}