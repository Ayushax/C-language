#include <stdio.h>

int main(){
    if(1){
        printf("This if is executed!\n");
    }
    if(4838){
      printf("This if is executed!\n");  
    }
    if(3.3433){
        printf("This if is also executed!\n");
    }
    if('e'){
        printf("This if is also executed!\n");
    }
     if(0){
        printf("I am zero - I am not executed!");
     }
     return 0;
}