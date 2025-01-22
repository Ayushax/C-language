#include <stdio.h>

int main(){

    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("Ayush1.txt","r");
    ptr2 = fopen("Ayush2.txt","a");
    while (1)
    {
        ch = fgetc(ptr); // when all the content of a file has been read break
        
        if (ch==EOF)
        {
            break;
        }
        else{
            fprintf(ptr2,"%c",ch);
            fprintf(ptr2,"%c",ch); 
            printf("%c\n",ch);
        }
        
    }
    
    
     return 0;
}