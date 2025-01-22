#include <stdio.h>

int main(){
char i = 'A';
char*j = &i; //j is a pointer to i ( j is a character pointer)

float k = 5.2323;
float*k1 = &k;
printf("The address of i is %p\n", &i );
printf("The address of i is %p\n", j );
printf("The address of k is %p\n", &k );


printf("The value at address k is %f\n", *(&k) );
printf("The value at address i is %c\n", *(&i) );

 return 0;
}