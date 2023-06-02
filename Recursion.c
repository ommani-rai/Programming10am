#include <stdio.h>

int fact(int n){
    // int fact = 1;
    if(n==0 || n==1){
        return 1;
    }
    else{
        return  n * fact(n-1);
        /*
        n=3
        3 *fact(2)
        3 * 2 *fact(1)
        6 * 1
        6
        
        */
    }
}

int main()
{
    int fac = fact(3);
    // int fac = fact(4);
    printf("the factorial of the number is %d", fac);
    /*
    recursion:
    2. factorial of the given number: 3=> 3 * 2 * 1 (0! => 1)
    factorial of n=> n * (n-1) * (n-2)
    fac = 1;
    for(i=1; i<=5; i++){
    fac *= i;
    fac = fac * i;
    }
    10
    n=10
    n! = 10 * 9 * 8* 7* 6*5*4*3*2*1
    n! = n * (n-1) * (n-2) * (n-3)
    n!= n * (n-1)! =>  10 * 9!
    fact(n) = n * fact(n-1)

    n=10
    n= 10+9+8......
    sum = 10 + sum(n-1)
    sum= n + sum(n-1)
    sum+= i;
    sum = sum + i;
    */



    return 0;
}