#include <stdio.h>
#include <string.h>
int main(){
    char c ='A';
    int Contains = 0;
     char str[] = "AAAAyush singh";
     for (int i = 0; i < strlen(str); i++)
     {
          if (str[i]==c)
          {
          Contains = 1;
          break;
          }
          
     }
     if (Contains)
     {
        printf("Yes, it contains \n");
    }
    else{printf("It does not contain\n");
     }
      
    
     return 0;
}