#include <stdio.h>

int main(){
    char  st[30];
    gets(st); // The entered string is stored in st!
    // gets do not give new line and do not print but puts do
    // puts(st);
    printf("%s",st);
    printf("hey");
    

     return 0;
}