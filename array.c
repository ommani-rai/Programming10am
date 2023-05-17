#include <stdio.h>

int main()
{
    int x[5], y[5];

    /*
    x[0] = 101
    x[1] = 10
    int => data type
    x => array name
    5 => array length
    */
    //    printf("%d", x[0]);
    printf("enter the numbers\n");
    for (int i = 0; i < 5; i++)
    {
        // printf("%d\n", x[i]);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        y[i] = 2 * x[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The number you entered is: %d\n", y[i]);
    }
    // printf("The number you entered is: %d\n", x[0]);
    // printf("The number you entered is: %d\n", x[1]);
    // printf("The number you entered is: %d\n", x[2]);
    // printf("The number you entered is: %d\n", x[3]);
    // printf("The number you entered is: %d\n", x[4]);

    return 0;
}