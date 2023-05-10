#include <stdio.h>
int main()
{
    int a = 10;
    int i;
    int sum = 0;
    for (i = 1; i <= a; i++)
    {
        sum += i;
        // sum = sum + i
        printf("the sum of number from 1 to %d is %d\n", i, sum);
    }
    return 0;
}