#include<stdio.h>

int main(){
    int a = 12;

    int y; 
    y = a++;

    int b = 23;
    int x = b--;

    // a + = 23;
    // a = 23 + a;

    printf("the value of y is: %d\n", y);
    printf("the value of a is %d\n", a);


    printf("the value of b is: %d\n", b);
    printf("the value of x is: %d\n", x);

    



    return 0;
}