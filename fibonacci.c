#include<stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int c, n;
    printf("enter the number to find fibonacci series");
    scanf("%d", &n);
    printf("%d\n", a);
    printf("%d\n", b);
    for(int i=0;i<n; i++){
        c = a + b; // 0, 1, 1 , 2, 3
        a  = b;
        b = c;
        printf("%d\n", c);
    }

    return 0;
}