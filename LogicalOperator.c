#include<stdio.h>
#include<conio.h>

int main(){
    int num1 = 12;
    int num2 = 45;

    // num1 = num2;
    // printf("%d\n", num1);
    
    // logical and operator
    if(num1> 0 && num2 < 0 && num1==num2){
        printf("logical and operator: both condition must be true\n");
        printf("nothing\n");
    }
    // logical or operator
    if(num1 < 0 || num2 < 0 || num1 == num2){ // (F || F || F)
        printf("logical or operator: if one of the given condition is true\n");
    }

    // logical not operator
    if(num1 != 12){
        printf("the value of %d is %d\n", num1, num1);
    }
    printf("end of the file\n");
    return 0;
}
