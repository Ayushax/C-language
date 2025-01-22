#include <stdio.h>

int main(){
    int age = 10;
    if(age>4){
     printf("We are inside if \n");
     printf("Your age is greater than 4 \n");
    }
    if (age%5==0){
     printf("We are inside if \n");
     printf("Your age is divisible by 5\n"); 
    }
   return 0;
}