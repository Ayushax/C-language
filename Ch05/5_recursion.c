#include <stdio.h>

int factorial(int);
// factorial(5) = 1 X 2 X 3 X 4 X 5 
// factorial(4) = 1 X 2 X 3 X 4
// factorial(3) = 1 X 2 X 3 
// factorial(2) = 1 X 2 
// factorial(n) = 1 X 2 X 3 X ... X n-1 X n
// = 1 X 2 X 3 X ... X n-1
int factorial(int n){
    if(n==1 || n ==0){ // Base call
        return 1;
    }
    // factorial(n) = Factorial(n-1) X n
    return factorial(n-1) * n; //Recursive call itself
}
int main(){
    int a = 9;
    printf("The factorail of %d is %d",a , factorial(a));

     return 0;
}
