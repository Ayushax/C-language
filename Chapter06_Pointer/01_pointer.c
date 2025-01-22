#include <stdio.h>

int main(){
    int i = 72;
    printf("The address of i %p\n", &i);

    int*j = &i; //j is a pointer pointing to i that means storing address of i in j
    printf("The address of i %p\n", j);
     
    int k = 67;
      printf("The address of k %p\n", &k);

     printf("The value at address j is %d\n",*(&i));
    // %u ---> interger value
    // As * and & cancel each others.

     return 0;
}