#include <stdio.h>

int main()
{
    /*
    syntax:
    if(condition){
        // body of truth
    }
    else{
        // body of false
    }


    */

    int age;

    printf("enter your age: \n");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("you can vote");
    }
    else
    {
        printf("you can not vote");
    }

    return 0;
}