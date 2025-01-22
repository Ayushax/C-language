#include <stdio.h>

int main(){
    // POINTER -ARITHMETIC USING INTEGER-POINTER
    // As int occupy 4 bit  
    // int a = 5;
    // int*ptr = &a;
    // printf("The address of a is %u\n",&a);
    // printf("The address of a is %u\n",ptr);
    // ptr++;
    // printf("The address of a is %u\n",ptr);




// POINTER -ARITHMETIC USING CHARACTER-POINTER 
// As char occupy 1 bit
    char a='j';
    char*ptr = &a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);
    ptr++;
    printf("The address of a is %u\n",ptr);
     return 0;
}