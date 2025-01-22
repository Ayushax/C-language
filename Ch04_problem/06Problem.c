#include <stdio.h>

int main(){
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8 
    // 0! = 1
    int product = 1;
    int n;
    scanf("%d", & n);
    for ( int i = 1; i <= n; i++)
    {
        product*=i; //product(new) = product(old)*i(i=1)
        //product(new1)=product(new)*i(i=2){see carefully}

    }
    printf("The factorial of %d is : %d",n ,product);
    
     return 0;
}