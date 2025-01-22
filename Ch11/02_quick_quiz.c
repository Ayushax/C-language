#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 5;
    float* ptr;
    ptr = (float*) malloc(n * sizeof(float));
  // malloc is memorial alocation
    //int arr[n]; // Not allowed in C 
    ptr[0] = 10.343;
    ptr[1] = 23.343;
    ptr[2] = 3.343;
    ptr[3] = 33.343;
    ptr[4] = 4.343;

    printf("%.2f\n",ptr[0]);
    printf("%.2f\n",ptr[1]);
    printf("%.2f\n",ptr[2]);
    printf("%.2f\n",ptr[3]);
    printf("%.2f\n",ptr[4]);
    
     return 0;
}