#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Ayush.txt", "a");
    //  char c = fgetc(fptr); // used to read a character from file
    // printf("%c\n",c);
    
    fputc('c',fptr);

     return 0;
}