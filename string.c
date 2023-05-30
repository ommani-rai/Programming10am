#include <stdio.h>

int main()
{
    /*
    string:
    array of characters
    end in \0
    char a[] = "ramraafdsfsaf"
    printf("%s",a)
    */

   char name[] = "shyam";
//    printf("%s", name);
//    printf("%c", name[0]);
//    printf("%c", name[1]);

   for(int i=0; name[i] !='\0'; i++){
    printf("%c\n", name[i]);
   }

    return 0;
}