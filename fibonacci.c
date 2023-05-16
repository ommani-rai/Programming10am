#include <stdio.h>
int main()
{
    int a = 0;
    int b = 1;
    int c, n;
    printf("enter the number to find fibonacci series\n");
    scanf("%d", &n);
    printf("\n");
    if (n == 1)
    {
        printf("%d\n", a);
    }
    else if (n == 2)
    {
        printf("%d\n", a);
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", a);
        printf("%d\n", b);
        for (int i = 0; i < n - 2; i++)
        {
            c = a + b;
            a = b;
            b = c;
            printf("%d\n", c);
        }
    }
    return 0;
}