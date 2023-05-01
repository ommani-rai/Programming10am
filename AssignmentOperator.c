#include <stdio.h>

int main()
{
    int a;
    int b;
    a = 23;
    int c = 23;

    b = c;
    int x = b;
    a *= b;
    a = a * b ;
    a -= b;
    a = a - b;
    a += b;
    printf("the value of a is %d\n", a);
    a = a + b;
    printf("the value of a is: %d\n", a);


    return 0;
}