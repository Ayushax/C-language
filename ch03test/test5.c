#include <stdio.h>

int main(){
    int a = 24, b = 34, c =53, d= 42;
    if(a>b && a>c && a>d){
        printf("The greatest of all is : %d",a);
    }
    else if(b>a && b>c && b>d){
        printf("The greatest of all is : %d",b);
    }
    else if(c>a && c>b && c>d){
        printf("The greatest ,of all is : %d",c);
    }
    else if(d>a && d>b && d>c){
        printf("The greatest of all is : %d",a);
    }

     return 0;
}