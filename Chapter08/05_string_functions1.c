#include <stdio.h>
#include <string.h>

int main(){
    char st[] = "Aayush Singh"; 

    char target[30];
    strcpy(target,st); // Target now contains "Aayush Singh"
       
       printf("%s\n%s ",st, target);

     return 0;
}