#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d",&n);
    ptr = (int*) malloc(n*sizeof(int));
    //int arr[n]; // Not allowed in C 
    ptr[0] = 10;

    free(ptr);
    printf("%d\n",ptr[0]);
     return 0;
}