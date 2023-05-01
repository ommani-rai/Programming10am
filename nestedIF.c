#include <stdio.h>

int main()
{
    /* nested if
    if(condition first){
        if(condition second){
            if(condition third){
                ...
                if(condition n){
                    // body/ statement
                }
            }
        }
    }
    */
    //    int a = 23;
    //    int b = 12;
    //    int c = 14;
    //    if(a < b){
    //     if(a > c){
    //         printf("%d is the greatest number", a);
    //     }
    //    }
    int age;
    int d;
    printf("enter your age\n");
    scanf("%d", &age);
    printf("how much did you pay for driving license form?\n");
    scanf("%d", &d);
    //    if(age > 18 && d == 1000){
    //         printf("you can try for driving license");
    //    }
    if (age > 18)
    {
        // printf("your are not child");
        if (d == 1000)
        {
            printf("you can try for driving license");
        }
    }

    return 0;
}