#include <stdio.h>
// String is colllection of characters.
int main(){
     //     char st[] = {'a', 'b','c','d','\0'}; // /0 is a null character used to termination of strigns in 1-D array.
     char st[] = "abc"; // Same as doing char st[] = {'a', 'b','c','d','\0'};
    for (int i = 0; i <= 3; i++)
    {
     printf("Character is %c\n",st[i]);
     
    }
    
    
     return 0;
}