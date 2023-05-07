#include <stdio.h>

int main()
{
    /*
    syntax;
    condition ? truth statement : false statement

    */
    int a = 23;
    a > 0
        ? a % 2 == 0
              // ? printf("%d is divisible by 2", a)
              ? a == 24
                    ? printf("the value of a is %d", a)
                    : printf("the value of a is not equall to 24")
              : printf("%d is not divisible by 2 that is odd number", a)
        : printf("%d is negative", a);

    return 0;
}