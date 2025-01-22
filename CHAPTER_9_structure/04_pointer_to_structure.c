#include <stdio.h>
#include <string.h>

struct employee
{
     int code; // This declares a new user defined data type!
     float salary;
     char name[10];
}; // Semicolon is important
int main()
{
    struct employee e1;
    e1.code = 56;
    struct employee *ptr;
    ptr = &e1;
    // now we can print structure elements using:
    printf("%d\n",(*ptr).code);
    printf("%d\n",(ptr)->code); // -> Arrow operator
    
    return 0;
}