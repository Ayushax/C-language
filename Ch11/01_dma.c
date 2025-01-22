#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d",&n);
    ptr = (int*) malloc(n * sizeof(int));
    //int arr[n]; // Not allowed in C 
    ptr[0] = 10;
    ptr[1] = 23;

    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    
     return 0;
}