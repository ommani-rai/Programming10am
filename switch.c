#include<stdio.h>

int main(){
    int num;
    printf("enter the number between 1 to 7\n");
    scanf("%d", &num);
    
    switch(num){
        case 1:
            printf(" You enter the number 1\n");
            break;

        case 2:
            printf("You entered teh number 2\n");
            break;

        case 3:
            printf(" You enter the number 3\n");
            break;

        case 4:
            printf("You entered teh number 4\n");
            break;

        case 5:
            printf(" You enter the number 5\n");
            break;

        case 6:
            printf("You entered teh number 6\n");
            break;

        case 7:
            printf("You entered the number 7\n");
            break;
            
        default:
            printf("Invalid Input!\n");
    }

    return 0;
}