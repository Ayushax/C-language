#include <stdio.h>
#include <string.h>

struct employee
{
     int code; // This declares a new user defined data type!
     float salary;
     char name[10];
}; // Semicolon is important

int main(){
     struct employee e1,e2;
     e1.code = 4511;
     strcpy(e1.name,"Ayush");
     e1.salary = 54.33;
      
      printf("%d %f %s",e1.code,e1.salary,e1.name);
     
     return 0;
}