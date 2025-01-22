#include <stdio.h>
#include <string.h>

struct employee
{
     int code; // This declares a new user defined data type!
     float salary;
     char name[10];
}; // Semicolon is important

int main(){
     struct employee facebook[100];// An array of structure 
     // we cab access the data usign:
     facebook[0].code = 100;
     facebook[1].code = 123;
      
      printf("%d %d\n",facebook[0].code,facebook[1].code);

      struct employee ayush = {100,732.32,"Ayush"};

      printf("%d,%f,%s",ayush.code,ayush.salary,ayush.name);

     
     return 0;
}