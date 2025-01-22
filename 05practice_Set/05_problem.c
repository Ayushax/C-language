#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a , ++a , a++ ); // right to left evalution form
    // 6 , 6 , 4 
    // 4 , 5 , 5 
    return 0;
}