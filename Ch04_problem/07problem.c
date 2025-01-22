#include <stdio.h>

int main(){
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8 
    // 0! = 1
    int product = 1;
    int n;
    printf("Enter the Value of n : \n");
    scanf("%d", & n);
    int i=1;
    while (i<=n)
    {
       product *=i;
       i++;
    }
    // while wale me i++ baad me aata hai 
    // and for wale me baad me aata hai
    printf("The factorial of %d is : %d",n ,product);
    
     return 0;
}