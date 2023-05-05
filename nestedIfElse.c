#include <stdio.h>

int main()
{
    /*
    syntax:
    if(condition 1){

    }
    else if(condition 2){

    }
    else if(condition 3){


    }
    else if(condition n){

    }
    else{

    }
    */

    int mark;
    printf("enter your english mark: ");
    scanf("%d", &mark);
    // if(mark < 0){
        
    // }
    if (mark > 0 && mark < 35)
    {
        printf("you failed in english");
    }
    else if (mark > 35 && mark < 50)
    {
        printf("you got D grade in english");
    }
    else if (mark > 50 && mark < 60)
    {
        printf("you got C grade in english");
    }
    else if (mark > 60 && mark < 70)
    {
        printf("you got B grade in english");
    }
    else if (mark > 70 && mark < 80)
    {
        printf("you got B+ grade in english");
    }
    else if (mark > 80 && mark < 90)
    {
        printf("you got A grade in english");
    }
    else if(mark > 90 && mark == 100)
        {
            printf("you got A+ grade in english");
        }
    else {
        printf("invalid mark!\nenter marks between 0 to 100");
    }
    return 0;
}