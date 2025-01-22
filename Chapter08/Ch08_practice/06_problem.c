#include <stdio.h>
#include <string.h>
// decryption of words 
int main(){
     char str[] = "Nfsb!qj{{b!lb!mbtu!tmjdf!hibs!qf!ibj";
     for (int i = 0; i < strlen(str); i++)
     {
          str[i] = str[i] - 1;
     }
     printf("%s",str);
    
     return 0;
}