#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int* ptr;
    scanf("%d",&n);
    ptr = (int*) malloc(n*sizeof(int));
    ptr[0] = 10;
    printf("%d\n",ptr[0]);

    ptr = (int*) realloc(ptr,10*sizeof(int));
     return 0;
}