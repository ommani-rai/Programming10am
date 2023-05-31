#include <stdio.h>
#include <string.h>

int main()
{
    /*
    string functions:
    1. strlen
    2. strcpy
    3. strcat
    4. strcmp

    */
    char name[50] = "ram";
    char fname[50] = "rams";
    char mname[50] = "kumar";
    char lname[50] = "Magar";

    char second_name[50];
    // int len = strlen(name);
    // strcpy(second_name, name);
    // strcat(mname, lname);
    // strcat(fname, mname);

    if(strcmp(name, fname)==0){
        printf("equall string");
    }
    else{
        printf("not equall");
    }

    // printf("now the concatinate string is: %s", fname);
    // printf("%s %s %s", fname, mname, lname);
    // printf("now person string is :%s ", second_name);
    // printf("the length of name is: %d", len);

    return 0;
}