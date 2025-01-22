#include <stdio.h>

int main(){
    int a = 4;
    int b = 3;
    int c = a +b;
    printf("The value of a is %d and value of b is %d and sum is %d\n",a,b,c);
    //Modulus operator is used to get the reminder
    printf("The remainder when a is divided by b is: %d\n",a%b); 
    // int and int -- int
    // int and float -- float
    // float and float -- float
    float d = 9.0;
    int e = 2;
    float f = d/e;
    printf("The value of d/e is %f\n",f);
    int g = 9;
    int  h = 2;
    float  i = 9/2;
    printf("The value of g/h is %f\n",i );
    int j = 3.0;
    printf("The value of j is %d",j);
     return 0;

}