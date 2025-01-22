#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d",&n);
    ptr = (int*) calloc(n,sizeof(int));
    //int arr[n]; // Not allowed in C 
    ptr[0] = 10;

    printf("%d\n",ptr[0]);
    
     return 0;
}