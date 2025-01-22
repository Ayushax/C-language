#include <stdio.h>
#include <string.h>

struct employee
{
     int code; // This declares a new user defined data type!
     float salary;
     char name[10];
}; // Semicolon is important

void show(struct employee e); // Function prototype

void show(struct employee e)
{
    printf("Code is %d\n Salary is %f\n Name is %s\n",e.code,e.salary,e.name);
};

int main(){
     
     struct employee e1;
     e1.code = 3233;
     strcpy(e1.name,"Ayush");
     e1.salary = 42.32;
     show(e1);


     return 0;
}