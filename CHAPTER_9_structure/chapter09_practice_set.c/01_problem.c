#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
}vectors;


int main(){
    vectors v = {1,2};
    printf("The value of vector is %di + %dj\n",v.i,v.j);
    
    
     return 0;
}