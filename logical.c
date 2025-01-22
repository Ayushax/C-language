#include <stdio.h>

int main(){
    // int a=1;int b=1;
    // printf("The value of a and b is %d \n", a&&b);
    // printf("The value of a or b is %d ", a||b);
    // output :-
    // The value of a and b is 1
    // The value of a or b is 1
    // int a=1;int b=0;
    // printf("The value of a and b is %d \n", a&&b);
    // printf("The value of a or b is %d ", a||b);
    // output:-
    // The value of a and b iVCXz` sS 0 
     // The value of a or b is 1
    int a=1;int b=1;
    printf("The value of a and b is %d \n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);
    if(a && b){
      printf("The value of a and b is same\n");
}// both are correct
    if(a){
        if(b){
            printf("Both value are same");
        }
    }
     return 0;
}