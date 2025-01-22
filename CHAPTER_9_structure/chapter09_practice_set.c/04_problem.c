#include <stdio.h>

typedef struct c
{
   int real;
   int imaginary; 
}Complex;

int main(){

    Complex c = {1,2};
    printf("The vale of Complex number is %d + %di\n",c.real ,c.imaginary);
    
    
     return 0;
}