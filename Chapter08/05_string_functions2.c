#include <stdio.h>
#include <string.h>

int main(){
    char a1[56] = "Ayush ";
    char a2[56] = "Bhai";

    strcat(a1,a2); // It add the both a1 and a2 without adding space.
    printf("%s",a1);
    
    
     return 0;
}